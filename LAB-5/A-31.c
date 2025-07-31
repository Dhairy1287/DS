//wap to multiply two matrices  
//A-31
#include<stdio.h>
int main(){
    int a[3][2]={{1,2},{3,4},{5,6}},b[2][3]={{1,2,3},{4,5,6}};
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]*b[j][i]+a[i][j+1]*b[j+1][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
    }
}