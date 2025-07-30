#include<stdio.h>
int main(){
    int seconds,minute,hour,ts;
    printf("Enter seconds");
    scanf("%d",&ts);
    hour=(ts/3600);
    ts=ts%3600;
    minute=ts/60;
    seconds=ts%60;
    printf("%d : %d  : %d ",hour ,minute,seconds);

}