//
// Created by timur on 1/15/22.
//
#include <stdio.h>
struct Complex {
    float real;
    float im;
};

struct Complex init() {
    float real, im;
    printf("Give real part");
    scanf("%f",&real);

    printf("Give imaginary part");
    scanf("%f",&im);

    printf("Your complex number is %f + %fi",real, im);
    struct Complex complex = {real,im};
    return complex;
}

struct Complex addition(struct Complex a, struct  Complex b) {
    struct Complex c = {a.real + b.real,a.im + b.im};
    return c;
}

struct Complex subtraction(struct Complex a, struct  Complex b) {
    struct Complex c = {a.real - b.real,a.im - b.im};
    return c;
}

