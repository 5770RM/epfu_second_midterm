//
// Created by timur on 1/16/22.
//
#include <stdio.h>
int num_of_characters(char* filename) {
    FILE *fp = fopen(filename, "r");
    int counter = 0;

    while (fgetc(fp)!=EOF) {
        counter++;
    }
    return counter;
}

int main() {
    char* file = "students.txt";
    int result = num_of_characters(file);
    printf("%d",result);
}
