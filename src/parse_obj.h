#ifndef S21_H_PARSE_OBJ
#define S21_H_PARSE_OBJ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GNU_SOURCE_
#define ssize_t size_t

typedef struct Vertex {
  float x;
  float y;
  float z;
} vertex;

typedef struct Polygon {
  int count_of_vertices;
  int* points_indices;
} polygon;

typedef struct Object {
  vertex* vertices;
  int count_v;
  polygon* polygons;
  int count_p;
} object;

int count_spaces(char* line);
void handle_polygon(object* obj, char* line);
void handle_vertex(object* obj, char* line);
void display_vertices(object* obj);
void display_polygons(object* obj);
object* parse_obj_file(char* filename);
void free_memory(object* obj, float* vertices_arr, int* indices_arr);
float max(float val1, float val2);
float min(float val1, float val2);

int count_indices_for_polygon(object* obj);
float* obj_vertices_to_1D_array(object* obj, float* arr);
int* obj_polygons_to_1D_array(object* obj, int* arr);
float* normalize_array(float* arr, int count);
#endif
