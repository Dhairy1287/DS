#include<stdio.h>
int main(){
    char a;
    printf( "enter a character wanna to check");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("It's vowel");
    }
    else{
         printf("It's consonen");
    }
}