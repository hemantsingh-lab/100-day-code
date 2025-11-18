//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(void){
    int r;
    float area,circumference;
    float pi=3.14;
    printf("enter radius of circle: ");
    scanf("%d",&r);
    area=(pi*r*r);
    circumference=(2*pi*r);
    printf("area and circumference of circle with radius %d is %f and %f",r,area,circumference);
    return 0;
}
