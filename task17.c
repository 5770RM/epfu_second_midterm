//
// Created by timur on 1/15/22.
//
#include <stdio.h>
#include "stdlib.h"
#include <string.h>

char* convert_to_morse(int length,char* input) {
    char *morse[26] = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
            "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    int outputLength = 1;
    for(int i = 0; i < length; i++) {
        int j = input[i] - 'a';
        outputLength += strlen(morse[j]);
    }

    char *output = calloc(outputLength, sizeof(char));

    for (int i = 0; i < length; i++) {
        int result = input[i] - 'a';
        strcat(output,morse[result]);

    }
    return output;
}




int main() {
char *x = "helloworld";
printf("%s",convert_to_morse(10,x));

}
