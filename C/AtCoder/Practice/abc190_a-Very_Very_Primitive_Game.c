#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(c==0)
    {
        if(a==0)
            printf("Aoki\n");
        else
        {
            if(a>b)
                printf("Takahashi\n");
            else
                printf("Aoki\n");
        }
    }

    else if(c==1)
    {
        if(b==0)
            printf("Takahashi\n");
        else
        {
            if(a<b)
                printf("Aoki\n");
            else
                printf("Takahashi\n");
        }
    }

    return 0;
}

