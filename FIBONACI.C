#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,next term;
printf("enter the number of terms:");
scanf("%d",&n);
printf("FIBONACCI SERIES:");
for(i=0;i<=n;++i)
{
printf("%d,a",t1);
next term=t1+t2;
t1=t2;
t2=next term;
}
return 0;
}
