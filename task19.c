//
// Created by timur on 1/15/22.
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


void write(int length,struct NVec array[]) {
    FILE *fp = fopen("output.txt","w");
    char buff[255];
    for (int i = 0; i < length; i++) {
        snprintf(buff,255,"%fi + %fj + %fz",array[i].x,array[i].y,array[i].z);
        fputs(buff, fp);
        fputc('\n',fp);
    }
    fclose(fp);
}


int main() {
    struct NVec vec1 = init();
    struct NVec vec2 = init();
    struct NVec vec3 = init();

    struct NVec array[3] = {vec1, vec2, vec3};
    write(3, array);

}

