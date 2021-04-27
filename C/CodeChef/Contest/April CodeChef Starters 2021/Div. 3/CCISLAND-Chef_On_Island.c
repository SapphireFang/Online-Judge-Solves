#include<stdio.h>
int main()
{
    int t,x,y,x_r,y_r,d;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d%d%d",&x,&y,&x_r,&y_r,&d);

        if(x/x_r<=y/y_r)
        {
            if(x/x_r>=d)
                printf("YES\n");
            else
                printf("NO\n");
        }

        else
        {
            if(y/y_r>=d)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
