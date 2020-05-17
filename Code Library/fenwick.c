#include<stdio.h>
int bit[1000],a[1000],n=8;

void update(int i,int value)
{
    for(;i<=n;i+=(i&-i));
    bit[i]+=value;
}

int query(int i)
{
    int query_sum=0;
    for(;i>0;i=i-(i&-i))
    {
        query_sum+=bit[i];
    }
    return query_sum;
}

int main()
{
    int i,s;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        update(i,a[i]);
    }

    s=query(7)-query(2-1);//query[2..7]
    printf("%d",s);

}
