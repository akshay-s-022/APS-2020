#include <stdio.h>

int main()
{
    int n=153,sum=0,a,z;
    a=n;
    while(n!=0)
    {
        z=n%10;
        sum+= z*z*z;
        n/=10;
    }
    if(a==sum)
      printf("Number is Armstrong ");
    else
      printf("Not Armstrong");

}



