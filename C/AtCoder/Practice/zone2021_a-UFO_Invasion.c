#include<stdio.h>
#include<string.h>
int main()
{
    char s[13];
    int i,count=0;

    gets(s);

    for(i=0; i<9; i++)
    {
        if(s[i]=='Z' && s[i+1]=='O' && s[i+2]=='N' && s[i+3]=='e')
            count++;
    }

    printf("%d",count);

    return 0;
}