#include <stdio.h>
#include <stdlib.h>

// Definition of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append node at the end
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to check if two linked lists are the same
int areIdentical(struct Node* head1, struct Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    // If both lists end together, they are identical
    return (head1 == NULL && head2 == NULL);
}

// Main function
int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Creating first list: 1->2->3
    append(&list1, 1);
    append(&list1, 2);
    append(&list1, 3);

    // Creating second list: 1->2->3
    append(&list2, 1);
    append(&list2, 2);
    append(&list2, 3);

    if (areIdentical(list1, list2))
        printf("The linked lists are identical.\n");
    else
        printf("The linked lists are not identical.\n");

    return 0;
}
