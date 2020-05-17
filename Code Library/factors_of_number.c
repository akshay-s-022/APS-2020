#include <stdio.h>

int main()
{
    int a=10,i;
    printf("1\n");
    for(i=2;i<=a/2;i++)
    {
        if (a%i==0)
        {
            printf("%d\n",i);
        }
    }
    printf("%d",a);
}


