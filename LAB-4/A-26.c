
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
    printf("Enter the element you want to insert: ");
    int m;
    scanf("%d",&m);
    int index;
    for(int i=0; i<n;i++){
    if(m<a[i]){
        index=i;
    }
        for(int j=n-1;j>i;j--){
            a[j]=a[j-1];
           }
        }

    
}