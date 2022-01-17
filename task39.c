//
// Created by timur on 1/16/22.
//
#include <stdio.h>
#include <stdlib.h>

struct list_el {
    int val;
    struct list_el * next;
};

void add(struct list_el* head, int index, int val) {
        int currentIndex = 0;
        struct list_el* temp = head;
        if(index == 0) {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            struct list_el* l = (struct list_el*) malloc(sizeof(struct list_el));
            l->val = val;
            l->next = head->next;

            temp->next = head;
            head->next = NULL;
        } else {
            while (currentIndex != index - 1) {
                currentIndex++;
                temp = temp->next;
            }

            if (currentIndex == index - 1 && temp->next != NULL) {
                struct list_el* listEl = (struct list_el*) malloc(sizeof(struct list_el));
                listEl->val = val;
                listEl->next = temp->next;
                temp->next = listEl;
            } else {
                struct list_el* l2 = (struct list_el*) malloc(sizeof(struct list_el));
                l2->val = val;
                temp->next = l2;
            }
        }
}

void print_node(struct list_el* head) {
    struct list_el* temp = (struct list_el*) malloc(sizeof(struct list_el));
    temp = head;
    printf("[");
    while (temp != NULL) {
        printf("%d ",temp->val);
        temp = temp->next;
    }
    printf("]");
}

int main() {
    struct list_el* l1 = (struct list_el*) malloc(sizeof(struct list_el));
    struct list_el* l2 = (struct list_el*) malloc(sizeof(struct list_el));
    struct list_el* l3 = (struct list_el*) malloc(sizeof(struct list_el));
    l1->val = 5;
    l1->next = l2;
    l2->val = 1;
    l2->next = l3;
    l3->val = 2;
    l3->next = NULL;


    add(l1, 2, 15);
    print_node(l1);

}