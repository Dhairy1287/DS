#include <stdio.h>
#include <stdlib.h>
//struct node* insertEnd(struct node *first, int data);
struct node {
    int info;
    struct node *link;
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

//displaying
void printList(struct node *first) {
    while (first != NULL) {
        printf("%d -> ", first->info);
        first = first->link;
    }
    printf("NULL\n");
}

//sorting
struct node* sort(struct node *first) {
    struct node *i, *j;
    int temp;

    for (i = first; i != NULL; i = i->link) {
        for (j = i->link; j != NULL; j = j->link) {
            if (i->info > j->info) {
                temp = i->info;
                i->info = j->info;
                j->info = temp;
            }
        }
    }

    return first;
}

int main() {
    struct node *first = NULL;

    first = insertEnd(first, 5);
    first = insertEnd(first, 2);
    first = insertEnd(first, 9);
    first = insertEnd(first, 7);

    printf("Original List:\n");
    printList(first);

    first = sort(first);

    printf("Sorted List:\n");
    printList(first);

    return 0;
}
