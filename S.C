#include <stdio.h>
#include<conio.h>
int main(void) {
	int a,b,temp=0;
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
	return 0;
}
