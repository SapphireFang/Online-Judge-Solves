#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int count=1,i,len;

    scanf("%s",&a);

    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(count==7)
                break;
        }

        else
            count=1;
    }

    if(count==7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
