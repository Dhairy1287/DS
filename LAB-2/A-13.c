#include<stdio.h>
int main(){
int n1,n2,count=0;
printf("Enter frist number : ");
scanf("%d",&n1);
printf("Enter second number : ");
scanf("%d",&n2);
for(int i=n1;i<=n2;i++){
    count=0;
    for(int j=1;j<=i/2;j++){   
        if(i%j==0){
            count++;
        }
       
    }
     
    if(count==1){
        // printf("prime numbers between n1=%d and n2=%d are %d",n1,n2,i);
        printf("%d ", i);
    }
     
}
}
    