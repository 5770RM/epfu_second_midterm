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

int main() {
    struct Complex a = init();
    struct Complex b = init();

    int result = ComplexCmp(a, b);
    printf("%d\n",result);


}