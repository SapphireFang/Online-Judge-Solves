#include<stdio.h>
int main()
{
    int t,n;

    scanf("%d",&t);

    while(t!=0)
    {
        scanf("%d",&n);

        printf("%d %d\n",n/2,n-n/2);

        t--;
    }

    return 0;
}
