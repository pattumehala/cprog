#include<stdio.h>
int main()
{
int base,exponent,result=1;
printf("enter the base value:");
scanf("%d",&base);
printf("Enter the exponent value:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("The power of the given number is:%d",result);
return 0;
}
