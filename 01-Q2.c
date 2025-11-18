//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(void){
    int a,b,sum,difference,product;
    float quotient;
    printf("enter two numbers: ");
    scanf("%d %d", &a , &b);
    sum=(a+b);
    difference=(a-b);
    product=(a*b);
    quotient=(a/b);
    printf("sum of %d and %d is %d\n",a,b,sum);
    printf("difference of %d and %d is %d\n",a,b,difference);
    printf("product of %d and %d is %d\n",a,b,product);
    printf("quotient of %d and %d is %f\n",a,b,quotient);
    return 0;

}