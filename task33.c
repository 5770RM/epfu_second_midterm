//
// Created by timur on 1/16/22.
//
#include <stdio.h>

int IterFun(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int f0 = 0;
    int f1 = 1;
    int fn;

    for(int i = 2; i <= n; i++) {
        fn = f0 + f1;

        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int RecFun(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return RecFun(n - 1) + RecFun(n - 2);

}
