#include<stdio.h>
#include<math.h>
int main(void)
{
    int num, rem, sum=0, count=0, temp;
    printf("enter any number:");
    scanf("%d",&num);
    temp = num;
    //count the digits
    while(num>0)
    {
        count++;//count=count+1
        num=num/10;
    }
    num=temp;
    //powered sum
    while(num>0)                //153,1634,9474,371        
    {
        rem = num%10;
        sum = sum+pow(rem,count);
        num=num/10;
    }
    if(temp==sum)
        printf("%d is an armstrong number", temp);
    else
        printf("%d is not an armstrong number", temp);
}