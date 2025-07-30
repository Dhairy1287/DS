#include<stdio.h>
#define PI 3.1415
int main(){
    float r,area;
    printf("Enter radius");
    scanf("%f",&r);
    area=PI*r*r;
    printf(" area of circle is %f",area);
}