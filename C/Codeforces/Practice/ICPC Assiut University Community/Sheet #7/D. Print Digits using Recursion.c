#include<stdio.h>

int number(int);

int main()
{
    int t,n,i;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("%d\n",n);
            continue;
        }
        number(n);
        printf("\n");
    }

    return 0;
}

int number(int x)
{
    int mod;

    if(x==0)
        return 0;

    else
        mod = x%10;
        number(x/10);
        printf("%d ",mod);
}
