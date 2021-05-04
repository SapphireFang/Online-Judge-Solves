#include<stdio.h>
int main()
{
    long long int t;

    scanf("%lld",&t);

    while(t--)
    {
        long long int a,b,c,x,y,z,n1,n2,n3,rem;

        scanf("%lld%lld%lld",&a,&b,&c);
        scanf("%lld%lld%lld",&x,&y,&z);

        n1 = a-x;
        n2 = b-y;
        n3 = c-z;

        if(n1>0 && n2>0 && n3>0)
        {
            while(n2!=0)
            {
                rem = n1%n2;
                n1 = n2;
                n2 = rem;
            }

            while(n3!=0)
            {
                rem = n1%n3;
                n1 = n3;
                n3 = rem;
            }

            printf("%lld\n",n1);
        }

        else
            printf("Impossible\n");
        
    }

    return 0;
}