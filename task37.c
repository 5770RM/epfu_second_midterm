//
// Created by timur on 1/16/22.
//
#include <stdio.h>
#include <stdlib.h>

struct list_el {
    int val;
    struct list_el * next;
};
struct list_el *head;

int sum_of_el(struct list_el *head) {
    struct list_el *temp = (struct list_el*) malloc(sizeof(struct list_el));
    temp = head;
    int sum = head->val;
    while (temp->next != NULL) {
        temp = temp->next;
        sum += temp->val;
    }
    return sum;
}

int main() {
    struct list_el* l1 = (struct list_el*) malloc(sizeof(struct list_el));
    struct list_el* l2 = (struct list_el*) malloc(sizeof(struct list_el));
    l1->val = 5;
    l1->next = l2;
    l2->val = 1;
    l2->next = NULL;
    int n = sum_of_el(l1);
    printf("%d",n);
}
