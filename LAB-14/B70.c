//WAP to split a circular linked list into two halves
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void insertAtLast(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        newNode->next = *head;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != *head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

void display(struct Node* head){
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

  void splitList(struct Node** head){
    struct Node* slow = *head;
    struct Node* fast = *head;

    while(fast->next != *head && fast->next->next != *head){
        fast = fast->next->next;
        slow = slow->next;
    }

    struct Node* head_1 = *head;
    struct Node* head_2 = slow->next;
    if(fast->next->next == *head){
        fast = fast->next;
    }
    slow->next = head_1;
    fast->next = head_2;
    display(head_1);
    printf("\n");
    display(head_2);

}
int main(){
    struct Node* head = NULL;
    insertAtLast(&head,1);
    insertAtLast(&head,2);
    insertAtLast(&head,3);
    insertAtLast(&head,4);
    insertAtLast(&head,5);
    insertAtLast(&head,6);
    splitList(&head);
}