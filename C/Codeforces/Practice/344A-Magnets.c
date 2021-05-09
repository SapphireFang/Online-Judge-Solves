#include<stdio.h>
int main()
{
    long long int n;

    scanf("%lld",&n);

    long long int a[n],i,count=1;

    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);

    for(i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }

    printf("%lld\n",count);

    return 0;
}
