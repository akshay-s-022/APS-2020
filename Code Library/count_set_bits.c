#include <stdio.h>

int main()
{
    int n = 12;
    int b = 0;
    while(n)
    {
        b = b + 1;
        n = n & n-1;
    }

    printf("%d",b);
}