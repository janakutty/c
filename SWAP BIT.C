#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two elements:");
scanf("%d",&a&b);
c^=a;
a^=b;
b^=c;
printf("after swapping:%d",a,b,c);
return 0;
}
