#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    int a[n],i,count=0;

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        if(a[i]==1)
            count=1;
    }

    if(count==0)
        printf("EASY\n");
    else
        printf("HARD\n");

    return 0;
}
