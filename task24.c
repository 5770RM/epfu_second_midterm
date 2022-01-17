//
// Created by timur on 1/16/22.
//
//
// Created by timur on 1/15/22.
//
#include <math.h>
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

int ComplexCmp(struct Complex a, struct Complex b) {
    float a_abs = sqrt(a.real * a.real + a.im * a.im);
    float b_abs = sqrt(b.real * b.real + b.im * b.im);

    if (a_abs > b_abs) {
        return 2;
    } else if(b_abs > a_abs) {
        return -2;
    } else if(a_abs == b_abs && a.real > b.real) {
        return 1;
    } else if(a_abs == b_abs && a.real < b.real) {
        return -1;
    } else if(a.real == b.real && a.im == b.im) {
        return 0;
    }
}

void write(int length, struct Complex array[]) {
    FILE *fp = fopen("complexCmp.txt","w");
    char buff[255];

    for(int i = 0; i < length - 1; i+=2) {
        int result = ComplexCmp(array[i], array[i + 1]);
        snprintf(buff,255,"%f + %fi, %f + %fi = %d",
                 array[i].real,array[i].im,array[i + 1].real, array[i + 1].im,result);
        fputs(buff,fp);
        fputc('\n',fp);
    }
    fclose(fp);
}

int main() {
    struct Complex a = init();
    struct Complex b = init();
    struct Complex c = init();
    struct Complex d = init();
    struct Complex array[4] = {a,b,c,d};
    write(4,array);


}
