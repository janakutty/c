#include <stdio.h>
#include<string.h>
int main()
{
	char string[20];
	int i,len;
	scanf("%s",string);
	len=strlen(string);
	i=len/2;
	if(len%2==0)
	{
	string[i]='*';
	string[i-1]='*';
	printf("%s",string);
	}
	else
	{
	string[i]='*';
	printf("%s",string);
}
return 0;
}
