#include<stdio.h>
int  main(){
    int n;
    printf("Enter number");
    scanf("%d",n);
    if(n%2==1){
        printf("number is odd");
    }
    else{
        printf("number is Even");
    }
    return 0;
}