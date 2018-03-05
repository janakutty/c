#include <stdio.h>

int main()
{
	int e;
	printf("enter the value");
	scanf("%d",&e);
	while(e%10!=0)
	{
		e++;
	}
	printf("\n the nearest number is:%d",e);
	return 0;
}
