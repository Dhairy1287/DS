//WAP to remove the duplicates nodes from given sorted Linkedlist.
//input:1->1->6->13->13->13->27->27
//output:1->6->13->27
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int arr[],int n){
    struct node *temp,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=arr[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
}
int main(){
    int arr[]={1,1,6,13,13,13,27,27};
    int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
    display(head);
    return 0;
}
