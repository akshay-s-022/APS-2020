#include <stdio.h>

int main()
{
    int a=2543,s=0;
    while(a)
    {
        s+=a%10;
        a/=10;
    }
    printf("%d",s);

}









