#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int len,i,count1,count2;

    scanf("%s",s);
    len = strlen(s);

    for(i=0; i<len; i+=2)
    {
        if(s[i]>=97 && s[i]<=172)
            count1=0;
        else
        {
            count1++;
            break;
        }
    }

    for(i=1; i<len; i+=2)
    {
        if(s[i]>=65 && s[i]<=90)
            count2=0;
        else
        {
            count2++;
            break;
        }
    }

    if(count1==0 && count2==0)
        printf("Yes\n");

    else
        printf("No\n");

    return 0;
}

