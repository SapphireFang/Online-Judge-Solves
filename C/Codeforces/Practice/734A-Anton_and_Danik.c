#include<stdio.h>
int main()
{
    int n,i,anton=0,danik=0;

    scanf("%d",&n);

    char s[n+1];

    scanf("%s",&s);

    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
            anton++;
        else if(s[i]=='D')
            danik++;
    }

    if(anton>danik)
        printf("Anton\n");
    else if(danik>anton)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}