#include<stdio.h>
int main()
{
int number,originalnumber,remainder,result=0;
printf("enter a three digit integer:");
scanf("%d",&number);
original number=number;
while(original number !=0)
{
remainder=originalnumber%10;
result +=remainder*remainder*remainder;
originalnumber /=10;
}
if(result==number)
{
printf("%d is an armstrong number.",number);
else
printf("%d is not an armstrong number.",number);
return 0;
}
