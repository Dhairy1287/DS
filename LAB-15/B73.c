/*WAP to delete alternate nodes of a doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

void display(struct Node* head){
    if(head == NULL){
        printf("empty List");
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        printf("%d<->",temp->data);
        temp = temp->next;
    }
    printf("%d<->NULL",temp->data);
}

void insertAtLast(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAlternate(struct Node** head){
    if(*head == NULL || (*head)->next == NULL){
        return;
    }
    
    struct Node* t1 = *head;
    struct Node* t2 = NULL;
    while(t1->next != NULL && t1->next->next != NULL){
        t2 = t1->next;
        t1->next = t2->next;
        t2->next->prev = t1;
        t1 = t1->next;
        free(t2);
    }
    if(t1->next != NULL && t1->next->next == NULL){
        t2 = t1->next;
        t1->next = NULL;
        free(t2);
    }
}
int main(){
    struct Node* head = NULL;
    insertAtLast(&head,1);
    insertAtLast(&head,2);
    insertAtLast(&head,3);
    insertAtLast(&head,6);
    insertAtLast(&head,7);
    insertAtLast(&head,8);
    insertAtLast(&head,9);
    insertAtLast(&head,10);

    deleteAlternate(&head);
    display(head);
}