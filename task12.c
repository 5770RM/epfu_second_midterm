//
// Created by timur on 1/15/22.
//
#include <stdio.h>

int main() {
    int array1[] = {2,1,3,4};
    int array2[] = {5,6,7,8};
    int length1 = 4;
    int length2 = 4;
    int array3[length1 + length2];
    for (int i = 0; i < length1;i++) {
        array3[i] = array1[i];
    }
    for (int i = 0;i < length2; i++) {
        array3[length1+i] = array2[i];
    }
    int length3 = 8;
    for (int i = 0; i < length3 - 1; i++) {
        for (int j = 0; j < length3 - 1 - i; j++) {
            if (array3[j] > array3[j + 1]) {
                int temp = array3[j];
                array3[j] = array3[j + 1];
                array3[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        printf("%d",array3[i]);
    }
}