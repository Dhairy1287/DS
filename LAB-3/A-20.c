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
    for(int i=0;i<n;i++){
        printf("Enter %d th element is %d \n",i,a[i]);   
    }  
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("It contains duplicate \n");
                break;
            }
            else{
                printf("IT doesn't contain duplicat \n");
                break;
            }
        }
    }
    }
