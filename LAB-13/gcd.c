#include<stdio.h>
#include<stdlib.h>
struct node {
   int info;
   struct node *link 
};

//inserting at end
struct node* insertEnd(struct node *first, int data)
 {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->link = NULL;

    if (first == NULL) {
        return newNode;
    }

    struct node *temp = first;
    while (temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = newNode;
    return first;
}

void printList(struct node *first) {
    while (first != NULL) {
        printf("%d -> ", first->info);
        first = first->link;
    }
    printf("NULL\n");
}

struct node gcd(struct node *first){
    *p1=first;*p2=first->link;
    
}
