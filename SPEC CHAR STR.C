#include<stdio.h>
int main()
{
char str[20];
int i.1,sum=0;
printf("enter the string:");
scanf("%s",&str);
1=strlen(str);
for(i=0;i<1;i++)
{
if(str[i]='@'||str[i]='%'||str[i]='*')
{
sum=sum+1;
}
}
printf("special character:%d",sum);
return 0;
}
