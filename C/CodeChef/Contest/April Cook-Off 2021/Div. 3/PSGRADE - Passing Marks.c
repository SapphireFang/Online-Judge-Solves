#include<stdio.h>
int main()
{
    int t,a_min,b_min,c_min,t_min,a,b,c;

    scanf("%d",&t);

    while(t!=0)
    {
        scanf("%d%d%d%d%d%d%d",&a_min,&b_min,&c_min,&t_min,&a,&b,&c);

        if(a>=a_min && b>=b_min && c>=c_min && (a+b+c)>=t_min)
            printf("YES\n");

        else
            printf("NO\n");

        t--;
    }

    return 0;
}
