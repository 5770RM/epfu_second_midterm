//
// Created by timur on 1/16/22.
//
#include <stdio.h>
#include <math.h>
#include <string.h>

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


int NVecCmp(struct NVec a, struct NVec b) {
    float a_length = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    float b_length = sqrt(b.x * b.x + b.y * b.y + b.z * b.z);

    if (a_length == b_length) return 0;
    return a_length > b_length? 1:-1;
}

void write(int length, struct NVec array[]) {
    FILE * fp = fopen("vectorCmp.txt", "w");
    char buff[255];

    for(int i = 0; i < length - 1; i+=2) {
        int result = NVecCmp(array[i], array[i + 1]);
        snprintf(buff, 255, "%fi + %fj + %fz, %fi + %fj +%fz = %d",
                 array[i].x,array[i].y,array[i].z,array[i + 1].x,array[i + 1].y,array[i + 1].z,result);
        fputs(buff, fp);
        fputc('\n',fp);
    }
    fclose(fp);
}


int main() {
    struct NVec vec1 = init();
    struct NVec vec2 = init();
    struct NVec vec3 = init();
    struct NVec vec4 = init();

    struct NVec array[4] = {vec1, vec2, vec3,vec4};
    write(4, array);
}
