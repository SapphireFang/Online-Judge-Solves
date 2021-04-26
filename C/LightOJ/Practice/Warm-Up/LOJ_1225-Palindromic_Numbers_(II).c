#include<stdio.h>
int main()
{
    long long int t,n,i=1,j;

    scanf("%lld",&t);

    while(t!=0)
    {
        scanf("%lld",&n);

        long long int temp,rem,sum=0;

        temp = n;

        while(temp!=0)
        {
            rem = temp%10;
            sum = sum*10 + rem;
            temp = temp/10;
        }

        if(sum==n)
            printf("Case %lld: Yes\n",i);
        else
            printf("Case %lld: No\n",i);

        t--;
        i++;
    }

    return 0;
}
