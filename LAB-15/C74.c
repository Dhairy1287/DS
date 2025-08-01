/*Write a program to simulate music player application using suitable data
structure. There is no estimation about number of music files to be managed by
the music player. Your program should support all the basic music player
operations to play and manage the playlist.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char str[20];
    struct Node* prev;
    struct Node* next;
};

void insertAtLast(char song[], struct Node** head){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->str, song);
    newNode->next = NULL;
    newNode->prev = NULL;
    if(*head == NULL){
        *head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }2
    struct Node* temp = (*head)->prev;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = *head;
    (*head)->prev = newNode;
}

void nextSong(struct Node** curr){
    *curr = (*curr)->next;
    printf("next song is: %s\n",(*curr)->str);
}

void display(struct Node** head){
    if(*head == NULL){
        return;
    }
    struct Node* temp = *head;
    while(temp->next != *head){
        printf("%s<->",temp->str);
        temp = temp->next;
    }
     printf("%s<->(back to first)",temp->str);
}

void currentSong(struct Node** curr){
    if(*curr == NULL){
        printf("Song list is empty\n");
        return;
    }
    printf("Current song is: %s\n",(*curr)->str);
}

void previouseSong(struct Node** curr){
    (*curr) = (*curr)->prev;
    printf("previouse song is: %s\n",(*curr)->str);
}

void deleteSong(char song[], struct Node** head, struct Node** curr){
    struct Node* temp2 = *head;
    struct Node* temp1 = (*head)->prev;
    if (temp2->next == *head && strcmp(temp2->str, song) == 0) {
        free(temp2);
        *head = NULL;
        *curr = NULL;
        return;
    }
    do{
        if(strcmp(temp2->str,song) == 0){
            temp1->next = temp2->next;
            temp2->next->prev = temp1;
            if(*head == temp2){
                *head = (*head)->next;
            }
            if (temp2 == *curr){
                *curr = (*curr)->next;
            }
            free(temp2);
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }while(temp1->next != *head);
}
int main(){
    struct Node* head = NULL;
    struct Node* curr = NULL;
    insertAtLast("abc",&head);
    insertAtLast("sd",&head);
    insertAtLast("fdv",&head);
    insertAtLast("qew",&head);
    insertAtLast("ergf",&head);
    insertAtLast("aqwef",&head);
   
    return 0;
}