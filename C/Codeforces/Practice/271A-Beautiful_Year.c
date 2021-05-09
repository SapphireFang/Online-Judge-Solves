#include<stdio.h>
int main()
{
    int y;

    scanf("%d",&y);

    while(y++)
    {
        int temp,i=0,j,rem,a[4],count=0;
        temp = y;

        while(temp!=0)
        {
            rem = temp%10;
            a[i] = rem;
            temp = temp/10;
            i++;
        }
        for(i=0; i<3; i++)
        {
            for(j=i+1; j<4; j++)
            {
                if(a[i]==a[j])
                    count=1;
            }
        }
        if(count==0)
            break;
    }

    printf("%d\n",y);

    return 0;
}
