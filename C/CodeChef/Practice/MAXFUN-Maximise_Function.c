#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    long long int a[100000],n,i,j,k,result,x,y,z;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);

        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
        }

        x=a[0];
        z=a[0];
        y=a[(n/2)+1];

        for(k=1; k<n; k++)
        {
            if(a[k]<x)
            {
                x=a[k];
            }
            if(a[k]>z)
            {
                z=a[k];
            }
        }

        result = labs(x-y)+abs(y-z)+abs(x-z);

        printf("%lld\n",result);
    }

    return 0;
}

