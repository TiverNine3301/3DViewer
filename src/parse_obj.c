#include "parse_obj.h"

#include <stdlib.h>

int count_spaces(char* line) {
  int count = 0;
  for (int i = 0; i < (int)strlen(line); i++) {
    if (line[i] == ' ') count++;
  }
  return count;
}

float max(float val1, float val2) { return val1 > val2 ? val1 : val2; }

float min(float val1, float val2) { return val1 < val2 ? val1 : val2; }

void handle_polygon(object* obj, char* line) {
  obj->count_p++;
  obj->polygons = realloc(obj->polygons, obj->count_p * sizeof(polygon));

  int temp_polygon_count_of_vertices = 0;
  int* temp_polygon_points_indices =
      calloc((count_spaces(line) + 1) * 2, sizeof(int));

  int index_cur_p = obj->count_p - 1;
  char sep[10] = " ";
  char* istr = strtok(line, sep);
  istr = strtok(NULL, sep);
  while (istr != NULL) {
    int num = atoi(istr) - 1;

    if (num < 0) {
      num = obj->count_v + num + 1;
    }

    if (temp_polygon_count_of_vertices == 0) {
      temp_polygon_count_of_vertices += 1;
      temp_polygon_points_indices[temp_polygon_count_of_vertices - 1] = num;
    } else {
      temp_polygon_count_of_vertices += 2;
      temp_polygon_points_indices[temp_polygon_count_of_vertices - 2] = num;
      temp_polygon_points_indices[temp_polygon_count_of_vertices - 1] = num;
    }
    istr = strtok(NULL, sep);
  }

  temp_polygon_count_of_vertices++;
  temp_polygon_points_indices[temp_polygon_count_of_vertices - 1] =
      temp_polygon_points_indices[0];

  obj->polygons[index_cur_p].points_indices = temp_polygon_points_indices;
  obj->polygons[index_cur_p].count_of_vertices = temp_polygon_count_of_vertices;
}

void handle_vertex(object* obj, char* line) {
  obj->count_v++;
  obj->vertices = realloc(obj->vertices, sizeof(vertex) * obj->count_v);
  char sep[10] = " ";
  char* istr = strtok(line, sep);
  istr = strtok(NULL, sep);

  obj->vertices[obj->count_v - 1].x = atof(istr);
  obj->vertices[obj->count_v - 1].y = atof(strtok(NULL, sep));
  obj->vertices[obj->count_v - 1].z = atof(strtok(NULL, sep));
}

void free_memory(object* obj, float* vertices_arr, int* indices_arr) {
  if (obj != NULL) {
    if (obj->vertices != NULL) free(obj->vertices);

    if (obj->polygons != NULL) {
      for (int i = 0; i < obj->count_p; i++) {
        if (obj->polygons[i].points_indices != NULL) {
          free(obj->polygons[i].points_indices);
        }
      }
      free(obj->polygons);
    }
    free(obj);
  }

  if (vertices_arr != NULL) free(vertices_arr);
  if (indices_arr != NULL) free(indices_arr);
}

float* normalize_array(float* arr, int count) {  // MinMaxScaler
  float max_val[3] = {arr[0], arr[1], arr[2]};   // x y z
  float min_val[3] = {arr[0], arr[1], arr[2]};   // x y z

  for (int i = 0; i < count; i += 3) {
    // MAX
    if (arr[i] > max_val[0]) {
      max_val[0] = arr[i];
    }
    if (arr[i + 1] > max_val[1]) {
      max_val[1] = arr[i + 1];
    }
    if (arr[i + 2] > max_val[2]) {
      max_val[2] = arr[i + 2];
    }

    // MIN

    if (arr[i] < min_val[0]) {
      min_val[0] = arr[i];
    }
    if (arr[i + 1] < min_val[1]) {
      min_val[1] = arr[i + 1];
    }
    if (arr[i + 2] < min_val[2]) {
      min_val[2] = arr[i + 2];
    }
  }

  float max_num = max(max_val[0], max(max_val[1], max_val[2]));
  float min_num = min(min_val[0], min(min_val[1], min_val[2]));

  for (int i = 0; i < count; i++) {
    arr[i] = (arr[i] - min_num) / (max_num - min_num) - 0.5;
  }

  return arr;
}

float* obj_vertices_to_1D_array(object* obj, float* arr) {
  int cnt = 0;
  for (int i = 0; i < obj->count_v; i++) {
    arr[cnt] = obj->vertices[i].x;
    arr[cnt + 1] = obj->vertices[i].y;
    arr[cnt + 2] = obj->vertices[i].z;
    cnt += 3;
  }
  return normalize_array(arr, cnt);
}

int count_indices_for_polygon(object* obj) {
  int count_indices_for_calloc = 0;
  for (int i = 0; i < obj->count_p; i++) {
    count_indices_for_calloc += obj->polygons[i].count_of_vertices;
  }
  return count_indices_for_calloc;
}

int* obj_polygons_to_1D_array(object* obj, int* arr) {
  int cnt = 0;
  for (int i = 0; i < obj->count_p; i++) {
    for (int j = 0; j < obj->polygons[i].count_of_vertices; j++, cnt++) {
      arr[cnt] = obj->polygons[i].points_indices[j];
    }
  }
  return arr;
}

#ifdef DEBUG
void display_vertices(object* obj) {
  for (int i = 0; i < obj->count_v; i++) {
    printf("v%d ", i + 1);
    printf("%f %f %f\n", obj->vertices[i].x, obj->vertices[i].y,
           obj->vertices[i].z);
  }
}

void display_polygons(object* obj) {
  for (int i = 0; i < obj->count_p; i++) {
    printf("f%d ", i + 1);
    for (int j = 0; j < obj->polygons[i].count_of_vertices; j++) {
      printf("%d ", obj->polygons[i].points_indices[j]);
    }
    printf("|count: %d|", obj->polygons[i].count_of_vertices);
    printf("\n");
  }
}
#endif

object* parse_obj_file(char* filename) {
  FILE* fp = NULL;
  object* obj = calloc(1, sizeof(object));

  if ((fp = fopen(filename, "r"))) {
    char* line = NULL;
    size_t line_len = 0;
    ssize_t read;
    while ((read = getline(&line, &line_len, fp)) != -1) {
      if (line[0] == 'f') {
        handle_polygon(obj, line);
      } else if (line[0] == 'v' && line[1] == ' ') {
        handle_vertex(obj, line);
      }
    }
    free(line);
    fclose(fp);
  } else {
    fprintf(stderr, "Incorrect filename %s", filename);
  }

  return obj;
}
