//
// Created by timur on 1/15/22.
//
#include <math.h>

int NVecCmp(struct NVec a, struct NVec b) {
    float a_length = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    float b_length = sqrt(b.x * b.x + b.y * b.y + b.z * b.z);

    if (a_length == b_length) return 0;
    return a_length > b_length? 1:-1;
}
