//
// Created by timur on 1/16/22.
//

//
// Created by timur on 1/16/22.
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

void write(int length, struct EPFUStud array[]) {
    FILE *fp = fopen("students.txt", "w");
    char buff[255];

    for(int i = 0; i < length - 1; i+=2) {
        int result = equalEntry(array[i],array[i + 1]);
        snprintf(buff,255,"%d %c %d %f %s %s, %d %c %d %f %s %s = %d",
                 array[i].id,array[i].sex,array[i].final_test,array[i].midterm_test,array[i].name,array[i].phone,
                 array[i + 1].id,array[i + 1].sex,array[i + 1].final_test,array[i + 1].midterm_test,array[i + 1].name,array[i + 1].phone,result);
        fputs(buff, fp);
        fputc('\n',fp);
    }
    fclose(fp);
}

int main() {
    struct EPFUStud a = {1,'M',23,100,"sad","+998900000000"};
    struct EPFUStud b = {1,'M',23,100,"sad","+998900000000"};
    struct EPFUStud c = {1,'M',23,100,"timur","+998900000000"};
    struct EPFUStud d = {1,'M',23,100,"timur","+998900000000"};
    struct EPFUStud array[4] = {a,b,c,d};
    write(4,array);
}