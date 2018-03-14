#include <stdio.h>
int main(void) 
{
	char ch[100];
	int i,flag=0,j;
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]!=0;j++)
		{
			if(ch[i]==ch[j])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
if(flag==0)
{
	printf("yes");
}
	return 0;
}
