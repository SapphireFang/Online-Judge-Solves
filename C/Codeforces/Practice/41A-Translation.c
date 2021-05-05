#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    int len1,len2,i,count=0;

    scanf("%s",&s);
    scanf("%s",&t);

    len1 = strlen(s);
    len2 = strlen(t);

    for(i=0; i<len1; i++)
    {
        if(s[i]==t[len2-1])
            count++;

        len2--;
    }

    if(count==len1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
