#include<stdio.h>
int main()
{
    char a[101];
    int i,count=0;

    scanf("%s",a);

    for(i=0; a[i]!='\0'; i++)
    {
        if(count<1)
        {
            if(a[i]=='h')
                count++;
        }

        if(count>0 && count<2)
        {
            if(a[i]=='e')
                count++;
        }

         if(count>1 && count<3)
        {
            if(a[i]=='l')
                count++;
        }

         if(count>2 && count<4)
        {
            if(a[i+1]=='l')
                count++;
        }

         if(count>3 && count<5)
        {
            if(a[i]=='o')
                count++;
        }
    }

    if(count==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
