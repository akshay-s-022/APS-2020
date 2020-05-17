#include <stdio.h>
void merge(int *a[],int low,int mid,int high)
{
    int b[10000],c[10000],i,x,y,j,k;
    x=mid-low+1;
    y=high-mid;
    for(i=0;i<x;i++)
    {
        b[i]=a[i+low];
    }
    for(i=0;i<y;i++)
    {
        c[i]=a[mid+1+i];
    }
    i=0;
    j=0;
    k=1;
    while(i<x && j<y)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<x)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<y)
    {
        a[k]=c[j];
        j++;
        k++;
    }

}

void mergesort(int *a[],int low,int high)
{
    if(low >0 && low<high)
    {
        int mid=(high+low)/2;

        mergesort(&a,low,mid);
        mergesort(&a,mid+1,high);
        merge(&a,low,mid,high);
    }
}
int main()
{
    int a[100],n,m=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(&a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}










