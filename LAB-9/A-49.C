#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *p;
    // char *q;
    // float *r;
    int *p=(int*)malloc(sizeof(int));
    char *q=(char*)malloc(sizeof(char));
    float *r=(float*)malloc(sizeof(float));
   if(p && q && r){
    *p=1;
    *q='c';
    *r=7.9;
    printf("The value of p is %d\n",*p);
    printf("The value of q is %c\n",*q);
    printf("The value of r is %f\n",*r);
   }
    free(p);
    free(q);
    free(r);
    return 0;
}