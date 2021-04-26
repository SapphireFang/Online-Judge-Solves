#include<stdio.h>
int main()
{
    int m,n,total;

    scanf("%d%d",&m,&n);

    if(m<=n)
    {
        total = (m*n)/2;

        printf("%d",total);
    }

    return 0;
}
