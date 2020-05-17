#include<stdio.h>
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n,i=0,j;
    char str[]={"ABCD"};
    n=sizeof(str)/sizeof(str[0])-1;
    j=n-1;
    while(i<=j)
    {
        swap(&str[i],&str[j]);
        i++;
        j--;
    }
    puts(str);


}
