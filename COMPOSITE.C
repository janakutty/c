#include <stdio.h>
#include<string.h>
int main(void)
{
	int num,i,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
if(count>=3)
{
	printf("yes");
}
else
{
printf("no");
}
return 0;
}
