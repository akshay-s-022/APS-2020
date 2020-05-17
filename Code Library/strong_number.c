//sum of factorial of a digits of a number is equal to number
#include <stdio.h>

int fact(int i)
{
    int f=1;
    while(i)
    {
        f*=i;
        i--;
    }
    return f;
}

int main()
{
    int a=145,s=0,n;
    n=a;
    while(n)
    {
        s+=fact(n%10);
        n/=10;
    }
    if(a==s)
    {
        printf("Number is strong ");
    }
    else{
        printf("Not a strong number ");
    }


}






