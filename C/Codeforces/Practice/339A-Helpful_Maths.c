#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],temp;
    int len,i,j;

    gets(s);

    len = strlen(s);

    for(i=0; i<len; i+=2)
    {
        for(j=i+2; j<len; j+=2)
        {
            if(s[i]>s[j])
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
        }
    }

    puts(s);

    return 0;
}
