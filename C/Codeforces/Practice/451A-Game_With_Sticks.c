#include<stdio.h>
int main()
{
    int n,m,temp;

    scanf("%d%d",&n,&m);

    if(n>m)
    {
        temp = n;
        n=m;
        m=temp;
    }

    if(n<=m)
    {
        if(n%2==0)
            printf("Malvika\n");
        else
            printf("Akshat\n");
    }

    return 0;
}
