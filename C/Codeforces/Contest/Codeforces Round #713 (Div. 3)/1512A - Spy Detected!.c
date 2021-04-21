#include<stdio.h>
int main()
{
    int t,i;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        int n,j;
        scanf("%d",&n);

        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }

        if(a[0]!=a[1] && a[1]==a[2])
            printf("1\n");

        else
        {
            for(j=0; j<n; j++)
            {
                if(a[j]!=a[j+1])
                    break;
            }
            printf("%d\n",j+2);
        }
    }

    return 0;
}
