//WAP to cobylinkedlist:
// #include<stdio.h>
// #include<stdlib.h>
// struct Node
// {
//     int info;
//     struct Node *link;
// };
// struct Node *first= NULL;


// void insertAtLast(int x){
//      struct Node *newNode= (struct Node *)malloc(sizeof(struct Node));
//      if(first==NULL){
//         newNode=first;
//      }
//      else{
//         struct Node *save = first;
//         save->link=first;
//         while(save->link!=NULL){
//     newNode->info = x;
//     save=save->link;
//      }
//      newNode=save;
//     struct Node *temp = first;
    // while (temp != NULL) {
    //     printf("%d -> ", temp->info);
    //     temp = temp->link;
    // }
    // printf("NULL\n"); 
    
// }
// int main(){
//  void insertAtLast(5);
// }



// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int info;
//     struct Node *link;
// };

// struct Node *first = NULL;

// void insertAtLast(int x) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->info = x;
//     newNode->link = NULL;

//     if (first == NULL) {
//         first = newNode;
//     } else {
//         struct Node *save = first;
//         while (save->link != NULL) {
//             save = save->link;
//         }
//         save->link = newNode;
//     }
// }

// // Optional: a function to print the list
// void printList() {
//     struct Node *temp = first;
//     while (temp != NULL) {
//         printf("%d -> ", temp->info);
//         temp = temp->link;
//     }
//     printf("NULL\n");
// }

// int main() {
//     insertAtLast(5);
//     insertAtLast(10);
//     insertAtLast(15);
//     printList(); 
//      // Output: 5 -> 10 -> 15 -> NULL
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;         // original list
struct Node *copyFirst = NULL;     // copy of the list

// Insert at end of original list
void insertAtLast(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct Node *temp = first;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newNode;
    }
}

// Copy the linked list
void copyLinkedList() {
    if (first == NULL) {
        copyFirst = NULL;
        return;
    }

    struct Node *original = first;
    struct Node *copyNode = (struct Node *)malloc(sizeof(struct Node));
    copyNode->info = original->info;
    copyNode->link = NULL;
    copyFirst = copyNode;

    struct Node *copyTail = copyNode;
    original = original->link;

    while (original != NULL) {
        copyNode = (struct Node *)malloc(sizeof(struct Node));
        copyNode->info = original->info;
        copyNode->link = NULL;

        copyTail->link = copyNode;
        copyTail = copyNode;
        original = original->link;
    }
}

// Utility: Print a linked list
void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->info);
        head = head->link;
    }
    printf("NULL\n");
}

int main() {
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);

    printf("Original list:\n");
    printList(first);

    copyLinkedList();

    printf("Copied list:\n");
    printList(copyFirst);

    return 0;
}



