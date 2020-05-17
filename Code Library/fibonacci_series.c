#include<stdio.h>

int main()
{
    int n=10,fib1=0,fib2=1,fib3;
    printf("0 1 ");
    for(int i=0;i<n-2;i++)
    {
        fib3=fib1+fib2;
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
    }


}

