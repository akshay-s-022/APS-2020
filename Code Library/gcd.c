#include <stdio.h>

int gcd(int a,int b)
{
    if(a>0 && b>0)
    {
        return a>b?gcd(a%b,b):gcd(a,b%a);
    }
}
int main()
{
    int a=25,b=100;
    printf("%d",gcd(a,b));

}








