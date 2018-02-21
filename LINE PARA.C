#include<stdio.h>
int main()
{
int i,linecount=0;
char ch;
printf("enter the paragraph:");
scanf("%s",&ch);
while(ch!=0)
{
if(ch=' ')
{
linecount++;
}
printf("\n the number of lines is %d",linecount);
return 0;
}
