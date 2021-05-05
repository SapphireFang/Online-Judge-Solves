#include<stdio.h>
int main()
{
    int n,h;

    scanf("%d%d",&n,&h);

    int a[n],i,count=0;

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for(i=0; i<n; i++)
    {
        if(a[i]>h)
            count+=2;
        else
            count++;
    }

    printf("%d\n",count);

    return 0;
}