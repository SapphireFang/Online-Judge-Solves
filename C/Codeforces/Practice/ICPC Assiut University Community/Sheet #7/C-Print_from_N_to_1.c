#include<stdio.h>

int number(int);

int main()
{
    int n;

    scanf("%d",&n);

    number(n);

    printf("\n");

    return 0;
}

int number(int x)
{
    if(x==0)
        return 0;

    else
    {
        if(x!=1)
            printf("%d ",x);

        else
            printf("%d",x);
    }
        number(x-1);
}
