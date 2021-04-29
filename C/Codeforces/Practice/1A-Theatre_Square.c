#include<stdio.h>
int main()
{
    long long int n,m,a,multi,count1,count2;

    scanf("%lld%lld%lld",&n,&m,&a);

    if(n%a==0)
        count1 = n/a;

    else
        count1 = n/a+1;

    if(m%a==0)
        count2 = m/a;

    else
        count2 = m/a+1;

    multi = count1*count2;

    printf("%lld\n",multi);

    return 0;
}
