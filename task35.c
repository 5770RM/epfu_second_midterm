//
// Created by timur on 1/16/22.
//
#include <stdio.h>

int IterFun(int n) {
    int f0 = 0;
    int f1 = 0;
    int f2 = 1;

    if(n == 0) return f0;
    if(n == 1) return f1;
    if(n == 2)return f2;
    int fn;

    for(int i = 3; i<=n;i++) {
        fn = f0 + f1 + f2;

        f0 = f1;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

int RecFun(int n) {
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;

    return RecFun(n - 1) + RecFun(n - 2) + RecFun(n - 3);
}

//int main() {
//    while (1) {
//        int n;
//        printf("Give the number:");
//        scanf("%d",&n);
//        int result = RecFun(n);
//        printf("Result is%d\n",result);
//    }
//}