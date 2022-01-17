//
// Created by timur on 1/15/22.
//
#include <stdio.h>

void ascOrder(int length,int array[]) {
    for (int i = 0;i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int array[] = {9,8,7,6,5,4,3};
    ascOrder(7,array);
    for (int i = 0; i < 7; i++) {
        printf("%d",array[i]);
    }
}
