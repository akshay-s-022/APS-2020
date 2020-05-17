/*
1
12
123
1234

*/

#include <stdio.h>

int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }

}








