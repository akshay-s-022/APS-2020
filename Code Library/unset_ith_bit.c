#include <stdio.h>

int main()
{
    int a=10,i=1;
    a= a & (~(1<<i));
    printf("%d",a);
}



