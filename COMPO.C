#include <stdio.h>
#include<string.h>
int main(void)
{
	int num,a,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(a=2;a<=num;a++)
	{
		if(num%a==0)
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
