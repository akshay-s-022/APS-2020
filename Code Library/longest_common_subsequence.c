#include <stdio.h>
#include <stdlib.h>

int longest_common_subsequence(int l1,char s1[],int l2,char s2[])
{
    int i,j,lcs[l1+1][l2+1];
    for(i=0;i<=l1;i++)
    {
        lcs[i][0]=0;
    }
    for(i=0;i<=l2;i++)
    {
        lcs[0][i]=0;
    }
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                lcs[i][j]=lcs[i-1][j-1]+1;
            }
            else{
                lcs[i][j]=lcs[i-1][j]>lcs[i][j-1]?lcs[i-1][j]:lcs[i][j-1];
            }
        }
    }
    return lcs[l1][l2];

}
int main()
{
    char s1[]="classical";
    char s2[]="musical";
    int l1=strlen(s1),l2=strlen(s2);
    int a=longest_common_subsequence(l1,s1,l2,s2);
    printf("%d",a);
}
