/*

****
***
**
*

*/

#include <stdio.h>

int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

}




