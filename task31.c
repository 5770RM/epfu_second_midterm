//
// Created by timur on 1/16/22.
//
#include <stdio.h>
int num_of_lines(char* filename) {
    FILE *fp = fopen(filename, "r");
    char ch;
    int counter = 1;
    while ((ch=fgetc(fp)) != EOF) {
        if (ch == '\n') {
            counter++;
        }
    }
    return counter;
}

int main() {
    char* file = "students.txt";
    int result = num_of_lines(file);
    printf("%d",result);
}
