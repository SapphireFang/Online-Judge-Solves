#include<stdio.h>
#include<string.h>

int n,a[100010],count=1,i,max=0;

int main()
{
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    a[n+1] = 0;

    for(i=0; i<n; i++)
    {
        if(a[i]<=a[i+1])
            count++;

        else
        {
            if(max<count)
                max = count;
            count = 1;
        }
    }

    printf("%d\n",max);

    return 0;
}
