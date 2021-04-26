#include<stdio.h>
int main()
{
    int p,v,t,n,i,count=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);

        if(p==0 && v==0 && t==0)
            count = count+0;
        else if(p==v && t==0 || v==t && p==0 || p==t && v==0 || p==v && v==t)
            count = count+1;
    }
    printf("%d\n",count);

    return 0;
}
