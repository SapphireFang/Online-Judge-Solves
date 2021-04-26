#include<stdio.h>

int binary(int);

int main()
{
    int t,n,i;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        binary(n);
        printf("\n");
    }

    return 0;
}

int binary(int x)
{
    int mod,temp;

    if(x==0)
        return 0;

    else
        temp = x;
        mod = temp%2;
        binary(x/2);
        printf("%d",mod);
}
