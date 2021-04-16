#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i,j,count = 0;

    scanf("%s",s);

    len = strlen(s);

    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(s[i]==s[j])
            {
                count++;
                break;
            }
        }
    }

    if((len-count)%2==0)
        printf("CHAT WITH HER!");

    else
        printf("IGNORE HIM!");

    return 0;
}
