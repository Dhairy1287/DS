#include<stdio.h>
void main(){
    printf("enter size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n-1;i++){
        printf("ENTER array element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter number to insert: ");
    int m;
    scanf("%d",&m);
    printf("Enter index of locating element: ");
    int l;
    scanf("%d",&l);
    for(int i=0;i<n;i++){
        if(i==l){
           for(int j=n-1;j>l;j--){
            a[j]=a[j-1];
           }
           a[i]=m;
        }
    }
    printf("NEW ARRAY: [");
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("\b]");
}