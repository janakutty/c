#include<stdio.h>
int main()
{
int f1,f2,rem,i;
printf("enter the first number for the range:\n");
scanf("%d",&f1);
printf("enter the final number for the range:\n");
scanf("%d",&f2);
printf("\n even number between %d and %d is:",f1,f2);
for(i=f1;i<=f2;++i)
{
rem=i%2;
if(rem==0)
printf("%d",i);
)
return 0;
}
