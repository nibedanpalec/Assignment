#include<stdio.h>
int main()
{
    int T,N,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        if(N<10)
        {
            printf("What an obedient servant you are!\n");
        }

        else
        {
            printf("-1\n");
        }

    }
    return 0;
}
