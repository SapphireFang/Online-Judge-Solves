#include<stdio.h>
long long int factorial(long long int a)
{
    if(a==0)
        return 1;
    else
        return a*factorial(a-1);
}

int main()
{
    long long int n;
    scanf("%lld",&n);

    printf("%lld\n",factorial(n));

    return 0;
}
