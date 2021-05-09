#include<stdio.h>
int main()
{
    long long int n;

    scanf("%lld",&n);

    long long int s[n],i,count1=0,count2=0,count3=0,count4=0,sum=0,rem=0;

    for(i=0; i<n; i++)
    {    
        scanf("%lld",&s[i]);

        if(s[i]==1)
            count1++;
        if(s[i]==2)
            count2++;
        if(s[i]==3)
            count3++;
        if(s[i]==4)
            count4++;
    }

    sum+=count4;

    if(count3>=count1)
    {
        sum+=count3;
        count1=0;
    }
    else
    {
        count1-=count3;
        sum+=count3;
    }

    if(count2%2==0)
        sum+=count2/2;
    else
    {
        rem = count2%2;
        sum+=count2/2;

        if(rem*2>=count1)
        {
            sum+=rem;
            count1=0;
        }
        else
        {
            count1-=rem*2;
            sum+=rem;
        }
    }

    if(count1>0)
    {
        if(count1%4==0)
            sum+=count1/4;
        else
            sum+=count1/4+1;
    }

    printf("%lld\n",sum);
    
    return 0;
}
