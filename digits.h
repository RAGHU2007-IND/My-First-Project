#include<stdio.h>
int main(void)
{
  int num, rem, sum=0;
  printf("enter the number:");
  scanf("%d",&num);
  //sum of digits
  while(num>0)
  {
      rem = num%10;
      sum = sum+rem;
      num = num/10;
  }
  printf("sum of digits: %d",sum);
}