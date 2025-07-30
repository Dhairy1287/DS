#include<stdio.h>
int main(){
      int n;
      float sum=0.0,avrage=0.0;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter %d th element",i);
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n;i++){
        printf("Enter %d th element is %d \n",i,a[i]);   
    }   
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    avrage=sum/n;
    printf("%f",avrage);
}