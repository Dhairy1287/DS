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

}