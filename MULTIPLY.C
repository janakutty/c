#include<stdio.h>
int main()
{
int i,n,d;
printf("enter the limit:\n");
scanf("%d",&n);
printf("enter the number:\n");
scanf("%d",&d);
printf("the divisible by %d are:",d);
for(i=1;i<=n;i++)
{
i%d==0;
printf("%d",i);
}
return 0;
}
