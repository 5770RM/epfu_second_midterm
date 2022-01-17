//
// Created by timur on 1/15/22.
//
#include <stdio.h>
int numberOfDifferences(int length1,int length2,char array1[],char array2[]) {
    int counter = 0;
    int length = length1 >= length2? length2 : length1;
    for (int i = 0; i < length; i++) {
        if (array1[i] != array2[i]) {
            counter++;
        }
    }
    return counter;
}

int main() {
    char array1[] = "abcdefgh";
    char array2[] = "durashok";
    int result = numberOfDifferences(8,8,array1,array2);
    printf("%d",result);
}

