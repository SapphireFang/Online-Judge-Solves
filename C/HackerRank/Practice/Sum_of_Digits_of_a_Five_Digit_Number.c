#include<stdio.h>
int main()
{
    int n,sum=0,div,temp,i,value=10000;

    scanf("%d",&n);

    temp = n;

    for(i=1; i<=5; i++)
    {
        div = temp/value;
        sum = sum + div;
        temp = temp%value;
        value = value/10;
    }

    printf("%d\n",sum);

    return 0;
}

