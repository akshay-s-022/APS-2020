#include<stdio.h>
#include<stdlib.h>

void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void permutation(char str[],int l,int r)
{
    if(l==r)
        puts(str);
    if(l<r)
    {
        for(int i=l;i<=r;i++)
        {
            swap(&str[l],&str[i]);
            permutation(str,l+1,r);
            swap(&str[l],&str[i]);
        }
    }
}

int main()
{
    char str[]="ABC";
    int n=strlen(str);
    permutation(str,0,n-1);
}
