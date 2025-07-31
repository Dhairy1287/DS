#include<stdio.h>
int main(){
       int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter %d th element",i);
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<=n;i++){
        printf("Enter %d th element is %d \n",i,a[i]);   
    }  
    int j;
    printf("Enter element You wanna to delete %d",&j);
    scanf("%d",&j);

    for(int i=0;i<n;i++){
        if(a[i]==j){
            for(int j=n-1;j>0;j--){
               a[j]=a[j-1]; 
            }
        }
    }
     printf("NEW ARRAY: [");
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("\b]");
}