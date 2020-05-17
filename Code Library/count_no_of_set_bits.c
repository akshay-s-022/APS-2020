#include<stdio.h>
int main()
{
  int n,i,count=0;
  scanf("%d",&n);
  while(n)
  {
   if(n&1)
	count++;
   n=n>>1;
  }
  printf("%d",count);
}