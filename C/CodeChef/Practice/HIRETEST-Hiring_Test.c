#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n,m,x,y,i,j;

        scanf("%d%d",&n,&m);
        scanf("%d%d",&x,&y);

        int b[n];

        for(i=0; i<n; i++)
        {
            char a[m+1];
            int count_c=0,count_p=0;

            scanf("%s",&a);

            for(j=0; j<m; j++)
            {
                if(a[j]=='F')
                    count_c++;
                if(a[j]=='P')
                    count_p++;
            }

            if((count_c>=x) || (count_c==x-1 && count_p>=y))
                b[i]=1;
            else
                b[i]=0;
        }

        for(i=0; i<n; i++)
            printf("%d",b[i]);
        printf("\n");
    }

    return 0;
}
