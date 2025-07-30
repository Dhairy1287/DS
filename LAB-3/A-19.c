#include<stdio.h>
int main(){
    int n,min,max;
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
    for(int i=0;i<n-1;i++)
{
if(a[i+1]>a[i])
{
    max=a[i+1];
}
else{
    min=a[i];
}

}
printf("Your largest number is %d at %d th index",max,a[i+1]);
printf("Your largest number is %d at %d th index",min,a[i]);

}