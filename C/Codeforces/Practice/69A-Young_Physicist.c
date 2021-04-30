#include<stdio.h>
int main()
{
    int n,i,a[3],b[3]={0};
    
    scanf("%d",&n);

    while(n!=0)
    {
        for(i=0; i<3; i++)
            scanf("%d",&a[i]);

        for(i=0; i<3; i++)
            b[i] = b[i]+a[i];

        n--;
    }

    if(b[0]==0 && b[1]==0 && b[2]==0)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}
