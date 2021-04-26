#include<stdio.h>
int main()
{
    int n,count=0;

    scanf("%d",&n);

    while(n!=0)
    {
        if(n<=5)
        {
            count++;
            break;
        }

        if(n>5)
        {
            n = n-5;
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
