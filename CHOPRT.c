#include<stdio.h>
int main()
{
    int m,n,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        if(m<n)
        printf("<");
        else if(n<m)
        printf(">");
        else
        printf("=");
        printf("\n");
    }

	return 0;
}
