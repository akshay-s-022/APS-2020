#include<stdio.h>

int main()
{
    int a[1000],n,i,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Digit :")
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            c++;
        }
    }
    printf("%d",c);



}


