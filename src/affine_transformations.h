#ifndef S21_H_AFFINE_TRANSFORMATIONS
#define S21_H_AFFINE_TRANSFORMATIONS
#include <math.h>

#include "parse_obj.h"

#ifndef M_PI
#define M_PI 3.14159
#endif
enum AXES { X, Y, Z };

void rotate(object* obj, float angle, int axis, float* arr);  //
void scale(object* obj, float* arr, float scaling_factor);
void move_obj(object* obj, float* arr, int axis, float pos);
#endif
