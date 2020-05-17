#include <stdio.h>

int main()
{
    int a=28,i,sum=1;

    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {

            sum+=i;
        }
    }

    if(sum==a)
    printf("Perfect Number");
    else
        printf("Not Perfect");

}








