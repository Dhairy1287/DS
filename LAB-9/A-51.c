#include<stdio.h>
#include<stdlib.h>
int main(){
     int size,sum=0;
     printf("Enter size of array:");
     scanf("%d",&size);

     int *ptr=(int *)malloc(size*sizeof(int));
     if(ptr==NULL){
        printf("Memory allocation failed\n");
        return 1;
      }
     printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+ptr[i];
    }
    printf("%d",sum);

}