#include <stdio.h>
int swap(int *a,int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}








