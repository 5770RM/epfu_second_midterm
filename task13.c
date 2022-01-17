//
// Created by timur on 1/15/22.
//
#include <stdio.h>
void swap(int *array[],int index_1, int index_2) {
    int temp = *array[index_1];
    *array[index_1] = *array[index_2];
    *array[index_2] = temp;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int *array[5];
    for(int i = 0; i < 5; i++)array[i] = &arr[i];
    swap(array,0,2);
    swap(array,2,4);
    for(int i = 0;i<5;i++)printf("%d ",*array[i]);
}