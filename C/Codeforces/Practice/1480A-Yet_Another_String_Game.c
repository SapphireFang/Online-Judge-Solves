#include<stdio.h>
#include<string.h>
int main()
{
    char s[51];
    int t,len,i;

    scanf("%d",&t);

    while(t!=0)
    {
        scanf("%s[^\n]",&s);

        len = strlen(s);

        for(i=0; i<len; i+=2)
        {
            if(s[i]=='a')
                s[i]='b';
            else
                s[i]='a';
        }

        for(i=1; i<len; i+=2)
        {
            if(s[i]=='z')
                s[i]='y';
            else
                s[i]='z';
        }
        puts(s);
        t--;
    }

    return 0;
}
