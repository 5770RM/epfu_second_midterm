//
// Created by timur on 1/15/22.
//
#include <stdio.h>
void sort(int LINES,char *lineptr[LINES]) {
    for (int i = 0; i < LINES - 1; i++) {
        for(int j = 0;j < LINES - 1 - i; j++) {
            int ch1 = (int) *lineptr[j];
            int ch2 = (int) *lineptr[j + 1];
            if(ch1 > ch2) {
                int temp = *lineptr[j];
                *lineptr[j] = *lineptr[j + 1];
                *lineptr[j + 1] = temp;
            }
        }
    }

}


int main() {
    char array[] = "timur";
    char *result[5];
    for(int i = 0; i < 5;i++) result[i] = &array[i];

    sort(5, result);

    for(int i = 0; i < 5; i++) printf("%c ", *result[i]);
}

