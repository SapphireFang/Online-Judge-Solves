#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r,result;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf",&r);

        result = (((r*2)*(r*2))-(M_PI*(r*r)));

        printf("Case %d: %.2lf\n",i,result);
    }

    return 0;
}
