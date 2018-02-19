#include<stdio.h>
int main()
{
int arr[MAX_SIZE];
int i,n;
printf("enter size of array:");
scanf("%d",&n);
printf("enter %d elements in the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n elements in array are:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
