#include <stdio.h>
#include<conio.h>
int main(void) {
	int j,k,temp=0;
	scanf("%d %d",&j,&k);
	temp=j;
	j=k;
	k=temp;
	printf("%d %d",j,k);
	return 0;
}
