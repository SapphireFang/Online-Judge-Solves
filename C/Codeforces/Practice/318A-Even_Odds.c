#include<stdio.h>
int main()
{
    long long int n,k,result;

    scanf("%lld%lld",&n,&k);

    if(n%2==0)
    {
        if(k<=n/2)
            result = 1+(2*(k-1));
        else
            result = 2+(2*(k-n/2-1));
    }

    else
    {
        if(k<=n/2+1)
            result = 1+(2*(k-1));
        else
            result = 2+(2*(k-(n/2+1)-1));
    }

    printf("%lld",result);
    
    return 0;
}
