#include<stdio.h>
int main()
{
    int x,i;

    scanf("%d",&x);

    for(i=100; i<=100000; i+=100)
    {
        if(x<i)
            break;
    }

    printf("%d\n",i-x);

    return 0;
}
