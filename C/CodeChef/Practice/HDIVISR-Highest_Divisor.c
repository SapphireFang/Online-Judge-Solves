#include<stdio.h>
int main()
{
    int n,rem,max=0,i;

    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {
        rem = n%i;
        if(rem == 0)
        {
            if(max<i)
                max = i;
        }
    }

    printf("%d\n",max);

    return 0;
}

