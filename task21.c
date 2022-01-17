//
// Created by timur on 1/16/22.
//
#include <stdio.h>
struct NVec {
    float x,y,z;
};

struct NVec init() {
    float x,y,z;
    printf("Give x:");
    scanf("%f", &x);
    printf("Give y:");
    scanf("%f", &y);
    printf("Give z:");
    scanf("%f", &z);

    struct NVec v = {x,y,z};

    return v;
}

struct NVec addition(struct NVec a, struct NVec b) {
    struct NVec c = {a.x + b.x,a.y + b.y,a.z + b.z};
    return c;
}

struct NVec subtraction(struct NVec a, struct NVec b) {
    struct NVec c = {a.x - b.x,a.y - b.y,a.z - b.z};
    return c;
}

//void read(int length) {
//    FILE *fp = fopen("vector.txt","r");
//    struct NVec array[length];
//    for (int i = 0; i < length; i++) {
//        fgets
//    }
//}