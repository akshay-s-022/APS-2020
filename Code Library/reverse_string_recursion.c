#include<stdio.h>
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
char *reverse(char str[],int l,int r)
{
    if(l<=r)
    {
        swap(&str[l],&str[r]);
        reverse(str,l+1,r-1);
    }
    return str;

}
int main()
{
    int n;
    char str[]={"ABCDE"};
    n=sizeof(str)/sizeof(str[0])-1;
    char *s=reverse(str,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%c",*(s+i));
    }
}
