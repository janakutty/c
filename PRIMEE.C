#include <stdio.h>

int main(void) {
	int i,n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		{
			count=count++;		}
	}
	if(count==2)
	{
		printf("\n prime number:");
	
	}
	else
	printf("\n not prime number");
	return 0;
}
