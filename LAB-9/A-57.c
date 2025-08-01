#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;

// Insert at first
void insertAtFirst(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *save = head;
    while (save->link != NULL) {
        save = save->link;
    }
    save->link = newNode;
}

// Delete first node
void deleteAtFirst() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *save = head;
    head = head->link;
    free(save);
}

// Delete last node
void deleteAtLast() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (head->link == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node *save = head;
    while (save->link->link != NULL) {
        save = save->link;
    }

    free(save->link);
    save->link = NULL;
}

// Display all nodes
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *save = head;
    while (save != NULL) {
        printf("%d -> ", save->data);
        save = save->link;
    }
    printf("NULL\n");
}

// Count the nodes
int countNodes() {
    int count = 0;
    struct Node *save = head;
    while (save != NULL) {
        count++;
        save = save->link;
    }
    return count;
}

// Main menu-driven function
int main() {
    int choice, data;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at first\n");
        printf("2. Display all nodes\n");
        printf("3. Delete the first node\n");
        printf("4. Insert at the end\n");
        printf("5. Delete at last\n");
        printf("6. Count the nodes\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtFirst(data);
            break;
        case 2:
            display();
            break;
        case 3:
            deleteAtFirst();
            break;
        case 4:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 5:
            deleteAtLast();
            break;
        case 6:
            printf("Total nodes: %d\n", countNodes());
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}


