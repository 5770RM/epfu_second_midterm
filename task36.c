//
// Created by timur on 1/16/22.
//
#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

int num_of_elements(struct node *head) {
    struct node* temp;
    temp = head;
    int counter = 1;
    while(temp->next != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}

int main() {
    struct node* l1 = (struct node*) malloc(sizeof(struct node));
    struct node* l2 = (struct node*) malloc(sizeof(struct node));
    l1->val = 2;
    l1->next = l2;
    l2->val = 1;
    l2->next = NULL;
    int n = num_of_elements(l1);
    printf("%d",n);
}


