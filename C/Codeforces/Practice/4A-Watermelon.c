#include<stdio.h>
int main()
{
    int w;

    scanf("%d",&w);

    if(w%2==0)
    {
        if(w==2)
            printf("NO\n");
        else
            printf("YES\n");
    }

    else
        printf("NO");

    return 0;
}