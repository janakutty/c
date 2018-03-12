#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the two numbers:");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case 1:
		c=a/b;
		printf("the division is:%d%d",c);
		break;
		case 2:
		c=a%b;
		printf("the modulo is:%d%d",c);
		break;
	}
return 0;
}
