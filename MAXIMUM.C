#include<stdio.h>
int main()
{
int array[100],maximum,c,size,location;
printf("enter the number of elements in an array\n");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
maximum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<maximum)
{
maximum=array[c];
location=c+1;
}
}
printf(" maximum element is present at location %d and its value is %d.\n",location,maximum);
return 0;
}
