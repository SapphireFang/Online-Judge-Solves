#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,j,l,n,k;

    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&k);

        long long int a[k];

        for(j=0; j<k; j++)
            scanf("%lld",&a[j]);

        char s[k+1];

        for(j=0; j<n; j++)
        {
            scanf("%s",&s);

            long long int sum=0;

            for(l=0; l<k; l++)
            {
                if(s[l]=='1')
                    sum+=a[l];
            }
            printf("%lld\n",sum);
        }
    }

    return 0;
}

