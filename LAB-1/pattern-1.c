#include<stdio.h>
int main(){
    int i,j;
    for(i=6;i>0;i--){
        for(int j=i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}