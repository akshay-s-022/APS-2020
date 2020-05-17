#include <stdio.h>

int main()
{
    int a=3428,rev=0;
    while(a)
    {
        rev = rev*10 + a%10;
        a/=10;
    }

    printf("%d",rev);

}







