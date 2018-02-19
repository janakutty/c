#include<stdio.h>
int main()
{
double firstnumber,second number,temporary variable;
printf("enter the firstnumber:");
scanf("%1d",&firstnumber);
printf("enter the secondnumber:");
scanf("%1d",&secondnumber);
temporary variable=firstnumber;
firstnumber=secondnumber;
secondnumber=temporary variable;
printf("\n after swapping,firstnumber=%21f"\n,firstnumber);
printf("\n after swapping,secondnumber=%21f"\n,secondnumber);
return 0;
}
