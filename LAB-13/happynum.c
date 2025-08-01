#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 #include<stdbool.h>
struct node
{
    int info;
 struct node *link; 
};

bool happy(){
int num,sum=0,temp,nymm;
     printf("num:");
    scanf("%d",&num);
   nymm=num;
    while(num!=0){
        temp=num%10;
        sum=sum+pow(temp,2);
        num/=10;
    }
    if(sum==1){
        return true;
    }
    else if(sum == nymm)  return false;
    else{
        return happy(sum);
    }
}
int main(){
    int value=happy();
    // printf("%d",value);
    return 0;
}