#ifndef S21_3DVIEWER_TEST_H
#define S21_3DVIEWER_TEST_H

#include <check.h>
#include <math.h>
#include "3DViewer_tests.h"
#include "../parse_obj.h"
#include "../affine_transformations.h"

Suite* suite_cnt_spaces(void);
Suite* suite_parse_obj_file(void);
Suite* suite_normalize_array(void);
Suite* suite_obj_vertices_to_1D_array(void);
Suite* suite_count_indices_for_polygon(void);
Suite* suite_obj_polygons_to_1D_array(void);
Suite* suite_handle_vertex(void);
Suite* suite_handle_polygon(void);
Suite* suite_free_memory(void);

Suite* suite_rotate(void);
Suite* suite_move(void);
Suite* suite_scale(void);

#endif