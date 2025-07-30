#include<stdio.h>
void main(){
    int r,n,ans;
    printf("Enter number : ");
    scanf("%d",&n);
   while(n!=0)
    {
       r= n%10;
       n=n/10 ;
        printf("%d",r);
    }
    
}