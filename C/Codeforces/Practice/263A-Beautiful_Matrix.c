#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a[10][10],n1,n2,i,j,result;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]>0)
            {
                n1=i;
                n2=j;
            }
        }
    }

    result = abs(n1-2)+abs(n2-2);

    printf("%d\n",result);

    return 0;
}
