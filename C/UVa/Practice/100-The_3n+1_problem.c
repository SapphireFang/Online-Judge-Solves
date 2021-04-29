#include<stdio.h>
int main()
{
    long long int n1,n2;

    while(scanf("%lld%lld",&n1,&n2)!=EOF)
    {
        long long int a,b,i,j,max=0,count;
        
        if(n1>n2)
        {
            a=n2;
            b=n1;
        }
        else
        {
            a=n1;
            b=n2;
        }

        for(i=a; i<=b; i++)
        {
            count=1;
            j=i;

            while(j!=1)
            {
                if(j%2==0)
                    j = j/2;
                else
                    j = 3*j+1;
                
                count++;
            }

            if(count>=max)
                max = count;
        }

        printf("%lld %lld %lld\n",n1,n2,max);
    }

    return 0;
}
