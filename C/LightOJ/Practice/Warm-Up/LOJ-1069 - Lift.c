#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,a,b;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);

        printf("Case %d: %d\n",i,(abs(b-a)*4+a*4+19));
    }

    return 0;
}
