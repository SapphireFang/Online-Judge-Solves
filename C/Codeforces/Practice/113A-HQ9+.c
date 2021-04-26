#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int len,i,count=0;

    scanf("%s",&a);

    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            count++;
            break;
        }
    }

    if(count>0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
