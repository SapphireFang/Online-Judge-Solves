#include<stdio.h>
#include<stdlib.h>

int sorting(const void *pa, const void *pb)
{
    const int *p1 = pa;
    const int *p2 = pb;

    return *p1-*p2;
}

int main()
{
    int t;

    scanf("%d",&t);

    while(t!=0)
    {
        int n,x,i,j,temp;

        scanf("%d%d",&n,&x);

        int a[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        if((n-x)==1)
            printf("1\n");

        else
        {
            int count=1;

            qsort(a, n, sizeof(int), sorting);

            for(i=0; i<n-1; i++)
            {
                if(a[i]!=a[i+1])
                    count++;
            }

            if(count+x<=n)
                printf("%d\n",count);
            else
                printf("%d\n",n-x);
        }

        t--;
    }

    return 0;
}
