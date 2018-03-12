#include <stdio.h>
int main() 
{
	char a[10];
	int x;
	scanf("%s",a);
	for(x=0;a[x]!='\0';x++)
	{
		if(a[x]>='0' && a[x]<='9')
		{
			printf("%c",a[x]);
		}
	}
return 0;
}
