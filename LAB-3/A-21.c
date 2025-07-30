#include<stdio.h>
int main(){
     int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter %d th element",i);
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<=n;i++){
        printf("Enter %d th element is %d \n",i,a[i]);   
    }  
    int temp;
    temp=a[2];
    a[2]=a[4];
    a[2]=temp;

    printf("%d",a[2]);
    printf("%d",a[4]);
     for(int i=0;i<=n;i++){
        printf("Enter %d th element is %d \n",i,a[i]);   
    }

}