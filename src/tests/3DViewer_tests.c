#include "3DViewer_tests.h"

void run_testcase(Suite *testcase) {
  static int count_testcase = 1;

  if (count_testcase > 0) {
    printf("\n");
    count_testcase++;
  }

  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {
      suite_cnt_spaces(), suite_parse_obj_file(), suite_normalize_array(), suite_obj_vertices_to_1D_array(),
      suite_count_indices_for_polygon(),suite_obj_polygons_to_1D_array(),suite_handle_vertex(),
      suite_handle_polygon(), suite_rotate(), suite_move(), suite_scale(),suite_free_memory(), NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}

int main(void) {
  run_tests();

  return 0;
}

