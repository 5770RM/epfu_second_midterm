//
// Created by timur on 1/16/22.
//
#include <stdio.h>

struct Complex {
    float real;
    float im;
};

struct Complex init() {
    float real, im;
    printf("Give real part: ");
    scanf("%f",&real);

    printf("Give imaginary part: ");
    scanf("%f",&im);

    printf("Your complex number is %f + %fi\n",real, im);
    struct Complex c = {real, im};
    return c;
}

void write(int length, struct Complex array[]) {
    FILE *fp = fopen("complex.txt","w");
    char buff[255];

    for(int i = 0; i < length; i++) {
        snprintf(buff,255,"%f + %fi",array[i].real,array[i].im);
        fputs(buff, fp);
        fputc('\n',fp);
    }
    fclose(fp);
}

int main() {
    struct Complex c1 = init();
    struct Complex c2 = init();
    struct Complex c3 = init();
    struct Complex c4 = init();
    struct Complex array[4] = {c1,c2,c3,c4};

    write(4, array);
}