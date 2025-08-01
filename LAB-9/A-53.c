//WAP to sort element in array using pointer. 
#include<stdio.h>
#include<stdlib.h>
int main(){
 
    int size,max=0;
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
        for(int j=i+1;j<size;j++){
            if(ptr[i]>ptr[j]){
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d,",ptr[i]);
    }
}