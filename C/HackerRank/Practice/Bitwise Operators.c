#include<stdio.h>
int main()
{
    int n,k,i,j,max_and=0,max_or=0,max_xor=0,temp,a,b;

    scanf("%d%d",&n,&k);

    for(i=1; i<=n; i++)
    {
        a=i;
        for(j=a+1; j<=n; j++)
        {
            b=j;
            temp = a&b;
            if(max_and<temp && temp<k)
                max_and=temp;

            temp = a|b;
            if(max_or<temp && temp<k)
                max_or=temp;

            temp = a^b;
            if(max_xor<temp && temp<k)
                max_xor=temp;
        }
    }

    printf("%d\n%d\n%d\n",max_and,max_or,max_xor);

    return 0;
}

