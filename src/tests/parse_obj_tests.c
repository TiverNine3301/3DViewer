#include "3DViewer_tests.h"

// count_spaces tests

START_TEST(cnt_spaces_0) {
  char* str = "f 1 2 3";
  int result = 3;
  ck_assert_int_eq(count_spaces(str), result);
}
END_TEST

START_TEST(cnt_spaces_1) {
  char* str = "v 1 2 3 44 5 9 ";
  int result = 7;
  ck_assert_int_eq(count_spaces(str), result);
}
END_TEST

START_TEST(cnt_spaces_2) {
  char* str = "f 6230/8612 6254/8640 6253/8639 6229/8611";
  int result = 4;
  ck_assert_int_eq(count_spaces(str), result);
}
END_TEST

Suite* suite_cnt_spaces(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=CNT SPACES=-\033[0m");
  TCase* tc = tcase_create("case_cnt_spaces");

  tcase_add_test(tc, cnt_spaces_0);
  tcase_add_test(tc, cnt_spaces_1);
  tcase_add_test(tc, cnt_spaces_2);

  suite_add_tcase(s, tc);
  return s;
}

// parse_obj_file tests

START_TEST(parse_obj_file_0_pos_indices) {
  char* filename = "tests/cube.obj";
  object* obj = parse_obj_file(filename);
  int count_v = 8;
  int count_p = 10;
  ck_assert_int_eq(obj->count_v, count_v);
  ck_assert_int_eq(obj->count_p, count_p);

  vertex vertices[8] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 2.0}, {0.0, 2.0, 0.0},
                        {0.0, 2.0, 2.0}, {2.0, 0.0, 0.0}, {2.0, 0.0, 2.0},
                        {2.0, 2.0, 0.0}, {2.0, 2.0, 2.0}};
  for (int i = 0; i < 8; i++) {
    ck_assert_float_eq_tol(obj->vertices[i].x, vertices[i].x, 1e-6);
    ck_assert_float_eq_tol(obj->vertices[i].y, vertices[i].y, 1e-6);
    ck_assert_float_eq_tol(obj->vertices[i].z, vertices[i].z, 1e-6);
  }

  polygon polygons[10] = {};
  polygons[0].count_of_vertices = 6;
  polygons[1].count_of_vertices = 6;
  polygons[2].count_of_vertices = 6;
  polygons[3].count_of_vertices = 6;
  polygons[4].count_of_vertices = 6;
  polygons[5].count_of_vertices = 6;
  polygons[6].count_of_vertices = 6;
  polygons[7].count_of_vertices = 6;
  polygons[8].count_of_vertices = 6;
  polygons[9].count_of_vertices = 6;

  polygons[0].points_indices = (int[6]){1, 7, 7, 5, 5, 1};
  polygons[1].points_indices = (int[6]){1, 3, 3, 7, 7, 1};
  polygons[2].points_indices = (int[6]){1, 4, 4, 3, 3, 1};
  polygons[3].points_indices = (int[6]){1, 2, 2, 4, 4, 1};
  polygons[4].points_indices = (int[6]){3, 8, 8, 7, 7, 3};
  polygons[5].points_indices = (int[6]){3, 4, 4, 8, 8, 3};
  polygons[6].points_indices = (int[6]){5, 7, 7, 8, 8, 5};
  polygons[7].points_indices = (int[6]){5, 8, 8, 6, 6, 5};
  polygons[8].points_indices = (int[6]){1, 5, 5, 6, 6, 1};
  polygons[9].points_indices = (int[6]){1, 6, 6, 2, 2, 1};

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 6; j++) {
      ck_assert_int_eq(obj->polygons[i].points_indices[j],
                       polygons[i].points_indices[j] - 1);
      ck_assert_int_eq(obj->polygons[i].count_of_vertices,
                       polygons[i].count_of_vertices);
    }
  }
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
}
END_TEST

START_TEST(parse_obj_file_2_incorrect_filename) {
  object* obj = parse_obj_file("tests/nofile.obj");
  void* result = NULL;
  ck_assert_ptr_eq(obj->polygons, result);
  free(obj);
}
END_TEST

Suite* suite_parse_obj_file(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=PARSE OBJ FILE=-\033[0m");
  TCase* tc = tcase_create("case_parse_obj_file");

  tcase_add_test(tc, parse_obj_file_0_pos_indices);
  tcase_add_test(tc, parse_obj_file_2_incorrect_filename);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(normalize_array_0) {
  float arr[6] = {0, 1, 2, 3, 4, 5};
  float normalized_array[6] = {0, 0.2, 0.4, 0.6, 0.8, 1.0};
  normalize_array(arr, 5);
  for (int i = 0; i < 5; i++) {
    ck_assert_float_eq_tol(arr[i], normalized_array[i] - 0.5, 1e-6);
  }
}
END_TEST

START_TEST(normalize_array_1) {
  float arr[6] = {0, -1.5, -3, -4.5, -5};
  float normalized_array[6] = {1, 0.7, 0.4, 0.1, 0};
  normalize_array(arr, 5);
  for (int i = 0; i < 5; i++) {
    ck_assert_float_eq_tol(arr[i], normalized_array[i] - 0.5, 1e-6);
  }
}
END_TEST

Suite* suite_normalize_array(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=NORMALIZE ARRAY=-\033[0m");
  TCase* tc = tcase_create("case_normalize_array");

  tcase_add_test(tc, normalize_array_0);
  tcase_add_test(tc, normalize_array_1);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(obj_vertices_to_1D_array_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* arr = malloc((obj->count_v * 3 + 1) * sizeof(float));
  obj_vertices_to_1D_array(obj, arr);
  float true_arr[] = {0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1,
                      1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
  for (int i = 0; i < obj->count_v * 3; i++) {
    ck_assert_float_eq_tol(arr[i], true_arr[i] - 0.5, 1e-6);
  }

  free(arr);
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
}
END_TEST

Suite* suite_obj_vertices_to_1D_array(void) {
  Suite* s =
      suite_create("\033[1;3;5;45;38m-=OBJ VERTICES TO 1D ARRAY=-\033[0m");
  TCase* tc = tcase_create("case_obj_vertices_to_1D_array");

  tcase_add_test(tc, obj_vertices_to_1D_array_0);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(count_indices_for_polygon_0) {
  object* obj = parse_obj_file("obj_images/cube.obj");
  int result = count_indices_for_polygon(obj);
  int true_result = 60;
  ck_assert_int_eq(result, true_result);
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
}
END_TEST

START_TEST(count_indices_for_polygon_1) {
  object* obj = parse_obj_file("obj_images/test_object.obj");
  int result = count_indices_for_polygon(obj);
  int true_result = 8;
  ck_assert_int_eq(result, true_result);
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
}
END_TEST

Suite* suite_count_indices_for_polygon(void) {
  Suite* s =
      suite_create("\033[1;3;5;45;38m-=COUNT INDICES FOR POLYGON=-\033[0m");
  TCase* tc = tcase_create("case_count_indices_for_polygon");

  tcase_add_test(tc, count_indices_for_polygon_0);
  tcase_add_test(tc, count_indices_for_polygon_1);

  suite_add_tcase(s, tc);
  return s;
}

// TODO
START_TEST(obj_polygons_to_1D_array_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  int* arr = malloc(count_indices_for_polygon(obj) * sizeof(int));
  obj_polygons_to_1D_array(obj, arr);
  int true_arr[] = {1, 7, 7, 5, 5, 1, 1, 3, 3, 7, 7, 1, 1, 4, 4, 3, 3, 1, 1, 2,
                    2, 4, 4, 1, 3, 8, 8, 7, 7, 3, 3, 4, 4, 8, 8, 3, 5, 7, 7, 8,
                    8, 5, 5, 8, 8, 6, 6, 5, 1, 5, 5, 6, 6, 1, 1, 6, 6, 2, 2, 1};
  for (int i = 0; i < count_indices_for_polygon(obj); i++) {
    ck_assert_int_eq(arr[i], true_arr[i] - 1);
  }
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
  free(arr);
}
END_TEST

Suite* suite_obj_polygons_to_1D_array(void) {
  Suite* s =
      suite_create("\033[1;3;5;45;38m-=OBJ POLYGONS TO 1D ARRAY=-\033[0m");
  TCase* tc = tcase_create("case_obj_polygons_to_1D_array");

  tcase_add_test(tc, obj_polygons_to_1D_array_0);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(handle_vertex_0) {
  object* obj = calloc(1, sizeof(object));
  char line[] = "v 1.5 2.2 3.1";
  handle_vertex(obj, line);
  ck_assert_float_eq_tol(obj->vertices[0].x, 1.5, 1e-6);
  ck_assert_float_eq_tol(obj->vertices[0].y, 2.2, 1e-6);
  ck_assert_float_eq_tol(obj->vertices[0].z, 3.1, 1e-6);

  free(obj->vertices);
  free(obj);
}
END_TEST

Suite* suite_handle_vertex(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=HANDLE VERTEX=-\033[0m");
  TCase* tc = tcase_create("case_handle_vertex");

  tcase_add_test(tc, handle_vertex_0);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(handle_polygon_0) {
  object* obj = calloc(1, sizeof(object));
  char line[] = "f 1 7 5";
  handle_polygon(obj, line);
  ck_assert_int_eq(1, obj->count_p);
  ck_assert_int_eq(6, obj->polygons->count_of_vertices);

  int arr[] = {1, 7, 7, 5, 5, 1};
  for (int i = 0; i < 6; i++) {
    ck_assert_int_eq(arr[i] - 1, obj->polygons->points_indices[i]);
  }
  free(obj->polygons->points_indices);
  free(obj->polygons);
  free(obj);
}
END_TEST

Suite* suite_handle_polygon(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=HANDLE POLYGON=-\033[0m");
  TCase* tc = tcase_create("case_handle_polygon");

  tcase_add_test(tc, handle_polygon_0);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(free_memory_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* arr = malloc((obj->count_v * 3 + 1) * sizeof(float));
  obj_vertices_to_1D_array(obj, arr);
  int* indices_array =
      (int*)calloc(count_indices_for_polygon(obj), sizeof(int));
  obj_polygons_to_1D_array(obj, indices_array);
  free_memory(obj, arr, indices_array);
}
END_TEST

Suite* suite_free_memory(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=FREE MEMORY=-\033[0m");
  TCase* tc = tcase_create("case_free_memory");

  tcase_add_test(tc, free_memory_0);

  suite_add_tcase(s, tc);
  return s;
}
