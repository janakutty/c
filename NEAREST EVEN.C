#include<stdio.h>
int main()
{
int a,b;
printf("enter the number:");
scanf("%d",&a);
if(a%2==0)
{
printf("\nthe given number is even:%d",a);
}
else
{
b=a-1;
printf("\nthe nearest even number is:%d",b);
}
return 0;
}
