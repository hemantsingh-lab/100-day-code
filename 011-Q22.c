//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(void){
    int cost_price, selling_price;
    printf("enter cost price: ");
    scanf("%d",&cost_price);
    
    printf("enter selling price: ");
    scanf("%d",&selling_price);
    int x= cost_price - selling_price;
    if ((cost_price - selling_price)>0 ){
        float loss= (x/cost_price)*100;
                printf("(%f is loss percentage",loss);

    }
    else {
        float profit=-(-(x/cost_price)*100);

        printf("%f is profit percentage",profit);

    }
    return 0;
}