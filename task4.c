#include <stdio.h>
#include <stdio.h>

struct NVec {
    float x,y,z;
};

struct NVec init() {
    float x,y,z;
    printf("Give x");
    scanf("%f", &x);
    printf("Give y");
    scanf("%f", &y);
    printf("Give z");
    scanf("%f", &z);

    struct vector v = {x,y,z};

    return vector;
}

struct NVec addition(struct NVec a, struct NVec b) {
    struct NVec c = {a.x + b.x,a.y + b.y,a.z + b.z};
    return c;
}

struct NVec subtraction(struct NVec a, struct NVec b) {
    struct NVec c = {a.x - b.x,a.y - b.y,a.z - b.z};
    return c;
    }