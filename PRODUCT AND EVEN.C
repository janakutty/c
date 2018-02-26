#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the two numbers:");
scanf("%d %d",&a,&b);
c=a*b;
printf("the value of c:%d",c);
if(c%2==0)
{
printf("the given number is even:",c);
}
else
{
printf("the given number is odd:",c);
}
return 0;
}
