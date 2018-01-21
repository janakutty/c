#include<stdio.h>
int main()
{
char c;
printf("enter the character\n");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("%c is an alphabet\n");
else
printf("%c is not an alphabet\n");
return 0;
}
