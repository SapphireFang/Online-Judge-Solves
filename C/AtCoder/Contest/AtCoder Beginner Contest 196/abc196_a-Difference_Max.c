#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,max;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    x=a;
    y=c;
    max = x-y;

    x=a;
    y=d;

    if(max<x-y)
        max = x-y;

    x=b;
    y=c;

    if(max<x-y)
        max = x-y;

    x=b;
    y=d;

    if(max<x-y)
        max = x-y;

    printf("%d\n",max);

    return 0;
}

