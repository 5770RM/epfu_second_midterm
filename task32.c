//
// Created by timur on 1/16/22.
//
#include <stdio.h>
float avg(char* filename) {
    FILE *fp = fopen(filename,"r");
    char ch;
    float num_of_characters,num_of_lines = 0;
    while ((ch = fgetc(fp)) != EOF) {
        num_of_characters++;
        if(ch == '\n'){
            num_of_lines++;
        }
    }

    float result = num_of_characters / num_of_lines;
    return result;
}


int main() {
    char* file = "students.txt";
    float result = avg(file);
    printf("%f",result);
}


