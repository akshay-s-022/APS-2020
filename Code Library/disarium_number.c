#include<stdio.h>
#include<math.h>
int get_length(int n)
{
    int s=0;
    while(n)
    {
        n/=10;
        s++;
    }
    return s;
}
int main()
{
    int n=175,rev=0,a,i,s=0,z;
    a=n;
    int len = get_length(n);
    while(n)
    {
        z=n%10;
        s+= pow(z,len);
        printf("%d ",s);
        len--;
        n/=10;
    }
    if(s==a)
    {
        printf("Disarium Number");
    }
    else
    {
        printf("Not Disarium %d %d",s,a);
    }
}
