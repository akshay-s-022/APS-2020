#include<stdio.h>
int main()
{
	int n,f=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n)
	{
	  f*=n;
	  n--;
	}
	printf("%d",f);
}