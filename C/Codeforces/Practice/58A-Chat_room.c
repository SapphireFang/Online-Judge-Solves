#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[5]="hello";
    int i,len,j=0,count=0;

    scanf("%s",&a);

    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if(a[i]==b[j])
        {
            count++;
            j++;
        }

        if(count==5)
            break;
    }

    if(count==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
