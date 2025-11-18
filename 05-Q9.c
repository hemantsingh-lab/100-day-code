//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main(void){
    int p,r,t,si,ci; //p=principal r=rate t=time 
    printf("enter principal:");
    scanf("%d",&p);
    printf("enter rate:");
    scanf("%d",&r);
    printf("enter time:");
    scanf("%d",&t);
    si=(p*r*t)/100;
    ci=(p*(1+r))^t;
    printf("simple interest is :%d\n",si);
    printf("compound interest is: %d",ci);
    return 0;

}