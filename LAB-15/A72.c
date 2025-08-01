/*. Write a menu driven program to implement following operations on the doubly
linked list.
• Insert a node at the front of the linked list.
• Delete a node from specified position.
• Insert a node at the end of the linked list. (Home Work)
• Display all nodes. (Home Work)
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertAtFirst(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void display(struct Node* head){
    struct Node* temp = head;
    while(temp->next != NULL){
        printf("%d<->",temp->data);
        temp = temp->next;
    }
    printf("%d->NULL",temp->data);
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

void deleteNode(struct Node** head, int index){
    struct Node* t1 = *head;
    int length = 0;
    while(t1 != NULL){
        t1 = t1->next;
        length++;
    }
    if(index == 0){  //delete at first
        if(*head == NULL){
            printf("list is empty");
            return;
        }
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else if(index == length-1){ //delete at last
         if(*head == NULL){
            printf("list is empty");
            return;
        }
        if((*head)->next == NULL){
            struct Node* temp = *head;
            *head = NULL;
            free(temp);
            return;
        }
        struct Node* t1 = *head;
        struct Node* t2 = (*head)->next;
        while(t2->next != NULL){
            t1 = t1->next;
            t2 = t2->next;
        }
        free(t2);
        t1->next = NULL;
    }
    else{
        struct Node* t1 = *head;
        struct Node* t2 = (*head)->next;
        for(int i=0; i<index-1; i++){
            t1 = t1->next;
            t2 = t2->next;
        }
        t1->next = t2->next;
        t2->next->prev = t1;
        free(t2);
    }
}

int main(){
    struct Node* head = NULL;
    insertAtFirst(&head,1);
    insertAtFirst(&head,2);
    insertAtFirst(&head,3);
    insertAtFirst(&head,4);
    insertAtLast(&head,1);
    insertAtLast(&head,2);
    insertAtLast(&head,3);
    insertAtLast(&head,4);
   
    deleteNode(&head,7);
    display(head);
}