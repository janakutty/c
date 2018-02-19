#include<stdio.h>
int main()
{
inr array[10],max,size,c,location=1;
printf("enter the ten elements in array\n");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
maximum=array[0];
for(c=1;c<size;c++)
{
maximum=array[c];
location=c+1;
}
}
printf("maximum element is present at location %d and its value is %d.\n",location,maximum);
return 0;
}
