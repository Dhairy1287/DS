#include<stdio.h>
int main(){
    printf("Enter size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("ENTER array element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to delete : ");
    int m;
    scanf("%d",&m);
    int index;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            index=i;
        }
    }
    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("New Array is: [");
    for(int i=0;i<n-1;i++){
        printf("%d,",a[i]);
    }
    printf("\b]");
}