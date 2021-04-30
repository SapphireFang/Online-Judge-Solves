#include<stdio.h>
int main()
{
    long long int n,temp,count=0;

    scanf("%lld",&n);

    temp = n;

    while(temp!=0)
    {
        if(temp%10==4 || temp%10==7)
            count++;

        temp = temp/10;
        
    }

    if(count==4 || count==7)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}