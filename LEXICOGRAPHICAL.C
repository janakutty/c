#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,temp;
char ch[20];
printf("enter the string:");
scanf("%s",ch);
n=strlen(ch);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ch[i]>ch[j])
{
temp=ch[i];
ch[i]=ch[j];
ch[j]=temp;
}
}
}
printf("%s",ch);
return 0;
}
