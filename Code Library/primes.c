#include<stdio.h>
int main()
{
    int n,f=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        printf("Not prime");
    }
    else
    {
        printf("prime");
    }
}
