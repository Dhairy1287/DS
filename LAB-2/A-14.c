//WAP to print 1 + (1+2) + (1+2+3) + (1+2+3+4)....+
#include<stdio.h>
int main(){
    int n,i;
    int sum =0;

    printf("Enter a value for n: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        sum+=(i * (i + 1))/2;
    }

    printf("Sum of the series is: %d\n",sum);
    return 0;
}


