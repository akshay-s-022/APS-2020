#include <stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int a[100],n,m=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=max(m,a[i]);
    }
    printf("%d",m);
}









