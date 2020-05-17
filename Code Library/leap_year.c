#include<stdio.h>

int main()
{
    int n=2000;
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
            printf("Leap year ");
            }
            else
            {
            printf("Not leap year ");
            }
        }
        else
        {
            printf("Leap year ");
        }
    }
        else
        {
            printf("Not leap year ");
        }

}


