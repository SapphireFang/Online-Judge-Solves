#include<stdio.h>
int main()
{
    int n,h,x,t[101],i,count=0;

    scanf("%d%d%d",&n,&h,&x);

    for(i=0; i<n; i++)
        scanf("%d",&t[i]);

    for(i=0; i<n; i++)
    {
        if((t[i]+x)>=h)
            count++;
    }

    if(count!=0)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}

