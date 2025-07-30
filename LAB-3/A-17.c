#include<stdio.h>
int main(){
      int n,n1,n2,sum=0;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter %d th element",i);
        scanf("%d",&a[i]);
    } 
    printf("Enter n1 th index of array:");
    scanf("%d",&n1);
     printf("Enter n1 th index of array:");
    scanf("%d",&n2);
    
    for(int i=n1;i<n2;i++){
        sum=sum+a[i];
    }
    printf("sum is %d",sum);

}