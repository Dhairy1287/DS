/*Write a menu driven program to implement following operations on the circular
linked list.
• Insert a node at the front of the linked list.
• Delete a node from specified position.
• Insert a node at the end of the linked list.
• Display all nodes.*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void insertFirst(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if(head == NULL){
        head = newNode;
        newNode->next = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtLast(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }
    struct Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

void deleteAtfirst(){
    struct Node* temp = head;
    struct Node* p = head->next;
    if(head == NULL){
        return;
    }
    if(head->next == head){
        head = NULL;
        free(temp);
        return;
    }
    while(p->next != head){
        p = p->next;
    }
    head = head->next;
    free(temp);
    p->next = head;
}

void deleteAtLast(){
    if(head == NULL){
        printf("empty");
        return;
    }

    struct Node* p = head;
    struct Node* q = head->next;

    if(head->next == head){
        head = NULL;
        free(p);
        return;
    }
    while(q->next != head){
        q = q->next;
        p = p->next;
    }
    free(q);
    p->next = head;
}

void display(){
    struct Node* temp = head;
    if(head == NULL){
        printf("List is empty");
        return;
    }
    while(temp->next != head){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("%d->(Back to first)",temp->data);
}
int main(){
    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);
    deleteAtLast();

    display();
}