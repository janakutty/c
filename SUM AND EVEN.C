#include <stdio.h>
 
int main(void) {
	int a,b,c;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("the value of c is %d",c);
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
