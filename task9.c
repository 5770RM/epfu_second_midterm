//
// Created by timur on 1/15/22.
//
#include <stdio.h>
#include <string.h>
struct EPFUStud {
    int id;
    char sex;
    int final_test; //no fractions
    float midterm_test; //fractions
    char *name;
    char phone[32]; //because +
};

int equalEntry(struct EPFUStud a, struct EPFUStud b) {
    if ((strcmp(a.name,b.name) == 0) && a.id == b.id) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct EPFUStud a = {1,'M',23,100,"sad","+998900000000"};
    struct EPFUStud b = {1,'M',23,100,"sad","+998900000000"};

    int result = equalEntry(a,b);
    printf("%d", result);
}