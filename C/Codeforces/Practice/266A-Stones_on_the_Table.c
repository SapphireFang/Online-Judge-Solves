#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count;


    scanf("%d",&n);

    char s[n];

    scanf("%s",&s);

    for(i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            count++;
    }

    printf("%d",count);

    return 0;
}
