//write a code to input two numbers and do their sum
#include <stdio.h>
int main(void){
    int a,b,sum;
    printf("enter two numbers: ");
    scanf("%d %d", &a , &b);
    sum=(a+b);
    printf("sum of %d and %d is %d",a,b,sum);
    return 0;

}