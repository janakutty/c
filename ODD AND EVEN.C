#include<stdio.h>
int main(void)
{
  char ch[50];
  int l,i,A;
  printf("ENTER A STRING");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l;i++)
  {
    if(i%2==0)
    {
      printf("%c",ch[i]);
    }
  }
  printf("\t");
  for(i=0;i<=l;i++)
  {
    if(i%2!=0)
    {
      printf("%c",ch[i]);
    }
  }
  
  return 0;
}
