#include <stdio.h>

int main(void) {
	int m,n,mul,p,count;
	printf("enter the numbers:");
	scanf("%d %d",&m,&n);
	mul=m*n;
	for(p=0;p<1000;p++)
	{
		if(mul==p*p)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("\n perfect square");
	}
	else
	printf("no perfect square");
	return 0;
}
