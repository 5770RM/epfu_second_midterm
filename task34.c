//
// Created by timur on 1/16/22.
//
#include <stdio.h>

int IterFun(int n) {
    int f0 = 2;
    int f1 = 1;
    if (n == 0) return f0;
    if(n == 1) return f1;
    int fn = 0;
    for(int i = 2; i <= n;i++) {
        fn = f0 + f1;

        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int RecFun(int n) {
    if (n == 0) return 2;
    if (n == 1) return 1;

    return RecFun(n - 1) + RecFun(n - 2);
}

//int main() {
//    while (1) {
//        int n;
//        printf("Give the number:");
//        scanf("%d",&n);
//        int result = IterFun(n);
//        printf("Result is%d\n",result);
//    }
//}