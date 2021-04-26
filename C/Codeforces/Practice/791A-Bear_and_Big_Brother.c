#include<stdio.h>
int main()
{
    int l,b,i;

    scanf("%d%d",&l,&b);

    for(i=1; ;i++)
    {
        l = l*3;
        b = b*2;
        if(l>b)
        {
            printf("%d\n",i);
            break;
        }
    }


    return 0;
}
