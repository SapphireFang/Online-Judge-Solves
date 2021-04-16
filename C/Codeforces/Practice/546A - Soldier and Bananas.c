#include<stdio.h>
int main()
{
    int k,w,n,i,sum=0,result;

    scanf("%d%d%d",&k,&w,&n);

    for(i=1; i<=n; i++)
    {
        sum = sum+(k*i);
    }

    if(w>sum)
        printf("0\n");

    else
    {
        result = sum-w;
        printf("%d\n",result);
    }

    return 0;
}
