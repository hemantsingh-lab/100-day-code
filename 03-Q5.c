//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(void){
    float temp1,temp2; //temperature in celcius is temp1 and temperature in fahrenheit is temp2
    printf("enter temperature: ");
    scanf("%f",&temp1);
    temp2 = ((temp1 *9)/5)+32;
    printf("temperature in fahrenheit is %f",temp2);
    return 0;

}