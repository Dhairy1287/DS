#include<stdio.h>
int main(){
    int b,p,ans=1;
    printf("Enter number : ");
    scanf("%d",&b);
    printf("Enter number : ");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        ans=ans*b;
    }
    printf("%d",ans);
}