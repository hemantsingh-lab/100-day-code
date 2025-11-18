//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(void){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
if( x>0 )
{
    printf("%d is a positive integer",x);
}
else if( x==0 ){
    printf("%d is equal to zero",x);
}
else {
    printf("%d is a negative integer",x);
}

return 0;
}