#include<stdio.h>
int main()
{
    long long int t;

    scanf("%lld",&t);

    while(t--)
    {
        long long int n,a,b,anu=0,sar=0;
        
        scanf("%lld%lld%lld",&n,&a,&b);

        char s[101];

        while(n--)
        {
            scanf("%s",&s);
            
            if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X')
                sar+=a;

            else
                anu+=b;
        }

        if(sar>anu)
            printf("SARTHAK\n");

        else if(sar<anu)
            printf("ANURADHA\n");

        else if(sar==anu)
            printf("DRAW\n");
    }

    return 0;
}
