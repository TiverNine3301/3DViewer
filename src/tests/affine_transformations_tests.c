#include "3DViewer_tests.h"

START_TEST(rotate_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);

  rotate(obj, 1, 0, vertices_array);
  float true_arr[] = {-0.5, -0.508650, -0.491198, -0.5, -0.491198, 0.508650,
                      -0.5, 0.491198,  -0.508650, -0.5, 0.508650,  0.491198,
                      0.5,  -0.508650, -0.491198, 0.5,  -0.491198, 0.508650,
                      0.5,  0.491198,  -0.508650, 0.5,  0.508650,  0.491198};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

START_TEST(rotate_1) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);

  rotate(obj, 45, 1, vertices_array);

  float true_arr[] = {-0.707107, -0.500000, 0.000000,  0.000000,  -0.500000,
                      0.707107,  -0.707107, 0.500000,  0.000000,  0.000000,
                      0.500000,  0.707107,  -0.000000, -0.500000, -0.707107,
                      0.707107,  -0.500000, -0.000000, -0.000000, 0.500000,
                      -0.707107, 0.707107,  0.500000,  -0.000000};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

START_TEST(rotate_2) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);

  rotate(obj, 60, 2, vertices_array);

  float true_arr[] = {-0.683013, 0.183013,  -0.500000, -0.683013, 0.183013,
                      0.500000,  0.183013,  0.683013,  -0.500000, 0.183013,
                      0.683013,  0.500000,  -0.183013, -0.683013, -0.500000,
                      -0.183013, -0.683013, 0.500000,  0.683013,  -0.183013,
                      -0.500000, 0.683013,  -0.183013, 0.500000};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

Suite* suite_rotate(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=ROTATE=-\033[0m");
  TCase* tc = tcase_create("case_rotate");

  tcase_add_test(tc, rotate_0);
  tcase_add_test(tc, rotate_1);
  tcase_add_test(tc, rotate_2);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(move_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);
  move_obj(obj, vertices_array, 0, 10);

  float true_arr[] = {
      -0.5 + 10,      -0.500000, -0.500000, -0.500000 + 10, -0.500000, 0.500000,
      -0.500000 + 10, 0.500000,  -0.500000, -0.500000 + 10, 0.500000,  0.500000,
      0.500000 + 10,  -0.500000, -0.500000, 0.500000 + 10,  -0.500000, 0.500000,
      0.500000 + 10,  0.500000,  -0.500000, 0.500000 + 10,  0.500000,  0.50000};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

START_TEST(move_1) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);
  move_obj(obj, vertices_array, 1, 10);

  float true_arr[] = {
      -0.5,      -0.500000 + 10, -0.500000, -0.500000, -0.500000 + 10, 0.500000,
      -0.500000, 0.500000 + 10,  -0.500000, -0.500000, 0.500000 + 10,  0.500000,
      0.500000,  -0.500000 + 10, -0.500000, 0.500000,  -0.500000 + 10, 0.500000,
      0.500000,  0.500000 + 10,  -0.500000, 0.500000,  0.500000 + 10,  0.50000};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

START_TEST(move_2) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);
  move_obj(obj, vertices_array, 2, 10);

  float true_arr[] = {
      -0.5,      -0.500000, -0.500000 + 10, -0.500000, -0.500000, 0.500000 + 10,
      -0.500000, 0.500000,  -0.500000 + 10, -0.500000, 0.500000,  0.500000 + 10,
      0.500000,  -0.500000, -0.500000 + 10, 0.500000,  -0.500000, 0.500000 + 10,
      0.500000,  0.500000,  -0.500000 + 10, 0.500000,  0.500000,  0.50000 + 10};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

Suite* suite_move(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=MOVE=-\033[0m");
  TCase* tc = tcase_create("case_move");

  tcase_add_test(tc, move_0);
  tcase_add_test(tc, move_1);
  tcase_add_test(tc, move_2);

  suite_add_tcase(s, tc);
  return s;
}

START_TEST(scale_0) {
  object* obj = parse_obj_file("tests/cube.obj");
  float* vertices_array = (float*)malloc(obj->count_v * sizeof(float) * 3);
  obj_vertices_to_1D_array(obj, vertices_array);

  scale(obj, vertices_array, 1.5);

  float true_arr[] = {
      -0.5 * 1.5,      -0.500000 * 1.5, -0.500000 * 1.5, -0.500000 * 1.5,
      -0.500000 * 1.5, 0.500000 * 1.5,  -0.500000 * 1.5, 0.500000 * 1.5,
      -0.500000 * 1.5, -0.500000 * 1.5, 0.500000 * 1.5,  0.500000 * 1.5,
      0.500000 * 1.5,  -0.500000 * 1.5, -0.500000 * 1.5, 0.500000 * 1.5,
      -0.500000 * 1.5, 0.500000 * 1.5,  0.500000 * 1.5,  0.500000 * 1.5,
      -0.500000 * 1.5, 0.500000 * 1.5,  0.500000 * 1.5,  0.50000 * 1.5};

  for (int i = 0; i < 24; i++) {
    ck_assert_float_eq_tol(vertices_array[i], true_arr[i], 1e-6);
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
  free(vertices_array);
}
END_TEST

Suite* suite_scale(void) {
  Suite* s = suite_create("\033[1;3;5;45;38m-=SCALE=-\033[0m");
  TCase* tc = tcase_create("case_scale");

  tcase_add_test(tc, scale_0);

  suite_add_tcase(s, tc);
  return s;
}