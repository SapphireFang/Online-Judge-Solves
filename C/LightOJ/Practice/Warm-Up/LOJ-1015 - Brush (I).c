#include<stdio.h>
int main()
{
    int t,i,n;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        int a[n],j,sum=0;

        for(j=0; j<n; j++)
            scanf("%d",&a[j]);

        for(j=0; j<n; j++)
        {
            if(a[j]>=0)
                sum = sum + a[j];
        }

        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
