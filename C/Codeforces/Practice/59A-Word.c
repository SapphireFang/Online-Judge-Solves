#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int up,low=0,len=0,i;

    scanf("%s",s);

    len = strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            up++;

        else if(s[i]>=97 && s[i]<=122)
            low++;
    }

    for(i=0; i<len; i++)
    {
        if(up>low && s[i]>=97 && s[i]<=122)
            s[i]-=32;

        else if(low>=up && s[i]>=65 && s[i]<=90)
                s[i]+=32;
    }

    puts(s);

    return 0;
}
