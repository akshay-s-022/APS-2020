#include <stdio.h>
int min(int a,int b)
{
    return a>b?b:a;
}
int main()
{
    int a[100],n,m=100000,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=min(m,a[i]);
    }
    printf("%d",m);
}










