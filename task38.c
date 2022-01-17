//
// Created by timur on 1/16/22.
//
#include <stdio.h>
#include <stdlib.h>
struct list_el {
    int val;
    struct list_el * next;
};

 int remove_node(struct list_el* head,int index) {
    if (index == 0) { //doesn't work
        head = head->next;
        return 1;
    }
    struct list_el* temp;
    temp = head;
    int currentIndex = 0;

    while (temp != NULL) {
        if(currentIndex == index - 1) {
            temp->next = temp->next->next;
            return 1;
        } else {
            currentIndex++;
            temp = head->next;
        }
    }
    return 1;
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

    remove_node(l1,0);
    print_node(l2);
}
