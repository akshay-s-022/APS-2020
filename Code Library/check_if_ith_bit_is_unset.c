#include<stdio.h>
int main()
{
 int  n,i;
 scanf("%d%d",&n,&i);
 if((n>>i &1) ==0)
 {
  printf("YES");
 }
 else
 {
  printf("NO");
 }
}