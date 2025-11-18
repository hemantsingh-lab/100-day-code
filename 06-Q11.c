//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(void){
    int n;
    printf("enter a number: ");
    scanf("%d ",&n);
    if ( n % 2 == 0){
         printf("%d is a even number",n);
    }
    else {
        printf("%d is a odd number",n);
    }
    return 0;
}