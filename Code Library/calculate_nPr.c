#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n)
    {
        f*=n;
        n--;
    }
    return f;
}
int main()
{
    int n=10,r=3,p;
    p=fact(n)/fact(n-r);
    printf("%d",p);


}
