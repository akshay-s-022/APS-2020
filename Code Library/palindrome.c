#include <stdio.h>

int main()
{
    int a=3428,rev=0,s;
    s=a;
    while(a)
    {
        rev = rev*10 + a%10;
        a/=10;
    }
    if(s==rev)
    printf("Palindrome");
    else{
        printf("Not Palindrome");
}

}








