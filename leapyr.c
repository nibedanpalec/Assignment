#include <stdio.h>

int main()
{
    int T,i,year;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%400 == 0)
    {
                printf("%d is a leap year.", year);
    }
    else
             {
printf("%d is not a leap year.", year);
             }
        }

    }

