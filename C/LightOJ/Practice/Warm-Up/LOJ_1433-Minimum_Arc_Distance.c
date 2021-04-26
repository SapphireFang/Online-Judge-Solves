#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double ax,ay,bx,by,ox,oy,distance,radius,ac,theta;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);

        radius = sqrt(pow(ox-ax,2)+pow(oy-ay,2));
        ac = sqrt(pow(ax-bx,2)+pow(ay-by,2))/2;
        theta = 2*asin(ac/radius);
        distance = radius*theta;

        printf("Case %d: %lf\n",i,distance);
    }

    return 0;
}
