#include<stdio.h>
int main(void)
{
    float actualprice, discount, finalprice;
    printf("enter the actual price:");
    scanf("%f", &actualprice);
    if(actualprice>=5000)
        discount = actualprice*20/100;
    else if(actualprice>=2000 && actualprice<5000)
        discount = actualprice*10/100;
    else if(actualprice<2000)
        discount = actualprice*5/100;
    finalprice = actualprice-discount;
    printf("discount: %f", discount);
    printf("\nfinal price: %f",finalprice);
}