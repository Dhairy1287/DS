#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=5;
    int *ptr=(int *)malloc(size*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
    printf("The elements of the array are: ");
    for(int i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;

}