//
// Created by timur on 1/16/22.
//
#include <stdio.h>
int num_of_strings(char* filename) {
    FILE *fp = fopen(filename, "r");
    int counter = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if(ch == '\n' || ch == ' ') {
            counter++;
        }
    }
    return counter;
}

int main() {
    char* file = "students.txt";
    int result = num_of_strings(file);
    printf("%d",result);
}

