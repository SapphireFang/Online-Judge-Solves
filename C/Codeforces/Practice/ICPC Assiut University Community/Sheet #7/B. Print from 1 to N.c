#include<stdio.h>

int number(int);

int main()
{
    int n;

    scanf("%d",&n);

    number(n);

    return 0;
}

int number(int x)
{
    if(x==0)
        return 0;

    else
        number(x-1);
        printf("%d\n",x);
}
