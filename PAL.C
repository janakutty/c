#include <stdio.h>
int main(void) {
	char string1[20];
	int i,length;
	int flag=0;
	printf("enter a string:");
	scanf("%s",&string1);
	length=strlen(string1);
	for(i=0;i<length;i++)
	{
		if(string1[i]!=string1[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag){
		printf("%s is not a palindrome:",string1);
	}
	else
	printf("%s is palindrome:",string1);
	return 0;
}
