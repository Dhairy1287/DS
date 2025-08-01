//Write a program to check string is palindrome or not using pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *ptr=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",ptr[i]);
    }
    for(int i=0;i<size;i++){
        if(ptr[i]!=ptr[size-i-1]){
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}