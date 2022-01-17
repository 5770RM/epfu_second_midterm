//
// Created by timur on 1/15/22.
//
#include <stdio.h>
struct EPFUStud {
    char* name;
    char* lastname;
};


int comesFirst(struct EPFUStud s1, struct EPFUStud s2) {
    int i = 0,j = 0,flag = 0;
    while (s1.lastname[i] != '\0' || s2.lastname[i] != '\0') {
            if(s1.lastname[i] != s2.lastname[i]) {
                flag = s1.lastname[i] > s2.lastname[i]? 1 : 2;
                break;
            }
            i++;
        }

    if(flag == 0) {
            while (s1.name[j] != '\0' || s2.name[j] != '\0') {
                if(s1.name[j] != s2.name[j]) {
                    flag = s1.name[i] > s2.name[i]? 1 : 2;
                    break;
                }
                j++;
            }
    }

    if(flag == 0) return -1;
    if (flag == 1) return 0;
    if(flag == 2) return 1;

}
int main() {
    struct EPFUStud s1 = {"da","yas"};
    struct EPFUStud s2 = {"da","ya"};
    int result = comesFirst(s1,s2);
    printf("%d",result);

}


