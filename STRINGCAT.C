#include <stdio.h>

int main(void) {
	int val,i;
	char str1[10],str2[10];
	printf("enter two strings");
	scanf("%s,%s",&str1,&str2);
	for(i=0;str1[i]!=0 && str2[i]!=0;i++)
	{
		if(str1[i]==str2[i])
		{
			val=1;
		}
		else if(str1[i]>str2[i])
		{
			val=2;
		}
		else
		{
			val=3;
		}
	}
	if(val==1)
	{
		printf("\n both the strings are equal");
	}
	else if(val==2)
	{
		printf("\nstring one is greater");
	}
	else
	{
		printf("\nstring two is greater");
	}
	return 0;
}
