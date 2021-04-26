#include<stdio.h>
int main()
{
    int n,i,j,x=0;
    char a[10];

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%s",a);

        if(a[1]=='+')
            x = x+1;

        if(a[1]=='-')
            x = x-1;
    }

    printf("%d",x);

    return 0;
}
