#include<stdio.h>
int main()
{
int arr[MAX_SIZE];
int size;
int i,j,temp;
printf("enter size of array:");
scanf("%d",&size);
printf("enter elements in an array:");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n elements of array in ascending order:");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}
