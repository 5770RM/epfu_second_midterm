//
// Created by timur on 1/16/22.
//

#include <stdlib.h>
#include <stdio.h>

struct list_el {
    int val;
    struct list_el * next;
};

struct list_el* get_by_el(struct list_el* head, int el) {
    struct list_el* temp = head;
    while (temp != NULL) {
        if(temp->val == el) {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
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

//int main() {
//    struct list_el* l1 = (struct list_el*) malloc(sizeof(struct list_el));
//    struct list_el* l2 = (struct list_el*) malloc(sizeof(struct list_el));
//    struct list_el* l3 = (struct list_el*) malloc(sizeof(struct list_el));
//    l1->val = 5;
//    l1->next = l2;
//    l2->val = 1;
//    l2->next = l3;
//    l3->val = 2;
//    l3->next = NULL;
//
//    struct list_el* l4 = get_by_el(l1,2);
//    int result = l4->val;
//    printf("%d",result);
//
//}