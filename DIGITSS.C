#include<stdio.h>
int main()
{
int num,rev,rem=0;
printf("enter a number:");
scanf("%d",&num);
while(num!=0)
{
rem=rem%10;
rev=(rev*10)+rem;
num=num/10;
}
num=rev;
while(num!=0)
{
rem=rem%10;
printf("%d",&rem);
num=num/10;
}
return 0;
}
