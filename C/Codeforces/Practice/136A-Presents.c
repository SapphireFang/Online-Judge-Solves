#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    int a[n],b[n],i,j;

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        j=a[i];
        b[j-1]=i+1;
    }

    for(i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");

    return 0;
}
