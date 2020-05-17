/*

   *
  **
 ***
****

*/

#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(j<=i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

}
}




