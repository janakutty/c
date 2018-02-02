#include<stdio.h>
int main()
{
int num,m=20,n=30;
clrscr();
printf("print odd numbers in a given range m to n:");
for(num=m;num<=n;num++)
{
if(num%2==1)
{
printf("%d",&num);
}
}
getch();
}
