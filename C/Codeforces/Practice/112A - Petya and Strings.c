#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    int i,len,result;

    scanf("%s",s1);
    scanf("%s",s2);

    len = strlen(s1);

    for(i=0; i<len; i++)
    {
        if(s1[i]>=97)
            s1[i] = s1[i]-32;

        if(s2[i]>=97)
            s2[i] = s2[i]-32;
    }

    result = strcmp(s1,s2);

    printf("%d",result);

    return 0;
}
