#include<stdio.h>
int main()
{
    int t,i;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        long long int a,b,result,f_result;

        scanf("%lld%lld",&a,&b);

        result = (b*2)/3;

        if(a%3==0)
            f_result = (result-((2*a)/3))+1;
        else if((a+1)%3==0)
            f_result = (result-((2*(a+1))/3))+2;
        else
            f_result = (result-((2*(a+1))/3))+1;

        printf("Case %d: %lld\n",i,f_result);
    }

    return 0;
}
