#include<stdio.h>
int main()
{
    long long int t,i,j,len;
    char n[100001];

    scanf("%lld",&t);

    for(i=0; i<t; i++)
    {
        scanf("%s",&n);

        long long int len = strlen(n);
        long long int count = 0;
        n[len]='0';

        if(n[0]=='0')
        {
            for(j=0; j<len; j++)
            {
            if(n[j]=='0' && n[j+1]=='1')
                {
                    count++;
                }
            }
        }

        else if(n[0]=='1')
        {
            for(j=0; j<len; j++)
            {
            if(n[j]=='1' && n[j+1]=='0')
                {
                    count++;
                }
            }
        }

        printf("%lld\n",count);
    }

    return 0;
}

