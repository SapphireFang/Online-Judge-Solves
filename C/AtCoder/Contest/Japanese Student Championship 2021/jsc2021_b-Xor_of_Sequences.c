#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    int a[n],b[m],c[1000],i,j,k=0,temp;

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<m; i++)
        scanf("%d",&b[i]);

    for(i=0; i<n; i++)
    {
        int count=1;

        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                count=0;
                break;
            }
        }

        if(count == 1)
        {
            c[k]=a[i];
            k++;
        }
    }

    for(i=0; i<m; i++)
    {
        int count=1;

        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
            {
                count=0;
                break;
            }
        }

        if(count == 1)
        {
            c[k]=b[i];
            k++;
        }
    }

    for(i=0; i<k; i++)
    {
        for(j=0; j<k-i-1; j++)
        {
            if(c[j]>c[j+1])
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }

    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n");

    return 0;
}
