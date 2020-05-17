/*

* * * *
*     *
*     *
* * * *

*/

#include<stdio.h>

int main()
{
    int n,n1=4,i,j;
    n = 2*n1-1;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n1-1)
            {
                if(j%2==0)
                {
                    printf("* ");
                }
            }
            else{
                if(j==0 || j==n-1)
                 {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
       }

    printf("\n");
}
}
