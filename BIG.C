#include <stdio.h>

int main(void) {
	int array[30];
	int n,i,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]>max)
		{
			max=array[i];

		}
	}
	return 0;
}
