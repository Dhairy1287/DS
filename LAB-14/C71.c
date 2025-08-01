/*. Write a program to perform addition of two polynomial equations using
appropriate data structure.
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int expo;
    struct Node* next;
};


struct Node* createNode(int coeff, int expo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->expo = expo;
    newNode->next = NULL;
    return newNode;
}


void insertEnd(struct Node** head, int coeff, int expo) {
    struct Node* newNode = createNode(coeff, expo);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void display(struct Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->expo);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
}


struct Node* addPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->expo == p2->expo) {
            insertEnd(&result, p1->coeff + p2->coeff, p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->expo > p2->expo) {
            insertEnd(&result, p1->coeff, p1->expo);
            p1 = p1->next;
        } else {
            insertEnd(&result, p2->coeff, p2->expo);
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        insertEnd(&result, p1->coeff, p1->expo);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insertEnd(&result, p2->coeff, p2->expo);
        p2 = p2->next;
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* sum = NULL;

    
    insertEnd(&poly1, 4, 3);
    insertEnd(&poly1, 3, 2);
    insertEnd(&poly1, 2, 0);

    
    insertEnd(&poly2, 5, 3);
    insertEnd(&poly2, 2, 1);
    insertEnd(&poly2, 3, 0);

    display(addPolynomials(poly1, poly2));

    return 0;
}
