//
// Created by timur on 1/15/22.
//
#include <stdio.h>
void sort(int length,int *array[]) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (*array[j] > *array[j + 1]) {
                int temp = *array[j];
                *array[j] = *array[j + 1];
                *array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    int *array[5];
    for(int i = 0;i<5;i++)array[i] = &arr[i];
    sort(5,array);
    for(int i = 0;i < 5; i++) printf("%d ",*array[i]);
}

