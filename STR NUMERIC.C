#include<stdio.h>
int main()
{
const char*str= "12345";
int x;
sscanf(str,"%d",&x);
printf("\n the value of x:%d",x);
return 0;
}
