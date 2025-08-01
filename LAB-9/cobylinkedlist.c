//WAP to coby linkedlist to another linkedlist
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

//to insert a node 
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

//display
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


struct Node* copyList(struct Node* head) {
    if (head == NULL) return NULL;
    struct Node* newHead = NULL;
    struct Node* tail = NULL;
    struct Node* temp = head;
    while (temp != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = temp->data;
        newNode->next = NULL;
        if (newHead == NULL) {
            newHead = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        temp = temp->next;
    }
    return newHead;
}

int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int n, data, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        head1 = insertEnd(head1, data);
    }
    printf("Original list: ");
    display(head1);
    head2 = copyList(head1);
    printf("Copied list: ");
    display(head2);
    return 0;
}
