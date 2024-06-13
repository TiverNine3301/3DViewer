#include "affine_transformations.h"

void rotate(object* obj, float angle, int axis, float* arr) {  //
  angle = angle * M_PI / 180;
  for (int i = 0; i < obj->count_v * 3; i += 3) {
    float x = arr[i];
    float y = arr[i + 1];
    float z = arr[i + 2];
    if (axis == X) {
      arr[i + 1] = y * cos(angle) + z * sin(angle);
      arr[i + 2] = -y * sin(angle) + z * cos(angle);
    } else if (axis == Y) {
      arr[i] = x * cos(angle) + z * sin(angle);
      arr[i + 2] = -x * sin(angle) + z * cos(angle);
    } else if (axis == Z) {
      arr[i] = x * cos(angle) + y * sin(angle);
      arr[i + 1] = -x * sin(angle) + y * cos(angle);
    }
  }
}

void scale(object* obj, float* arr, float scaling_factor) {
  for (int i = 0; i < obj->count_v * 3; i++) {
    arr[i] = arr[i] * scaling_factor;
  }
}

void move_obj(object* obj, float* arr, int axis, float pos) {
  for (int i = 0; i < obj->count_v * 3; i += 3) {
    if (axis == X)
      arr[i] += pos;
    else if (axis == Y)
      arr[i + 1] += pos;
    else if (axis == Z)
      arr[i + 2] += pos;
  }
}
