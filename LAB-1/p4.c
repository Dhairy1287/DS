#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter frist number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is biggest one");
    }
    else if(b>c && b>a){
        printf("b is biggest one");
    }
    else{
          printf("c is biggest one");
    }
    return 0;
}