#include<stdio.h>
int main()
{
    int t,m,h,i,bmi;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&m,&h);

        bmi = m/(h*h);

        if(bmi<=18)
            printf("1\n");
        else if(bmi>=19 && bmi<=24)
            printf("2\n");
        else if(bmi>=25 && bmi<=29)
            printf("3\n");
        else if(bmi>=30)
            printf("4\n");
    }

    return 0;
}

