#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[1000];
    int len,i,j=0;

    scanf("%s",&a);

    strlwr(a);
    len = strlen(a);

    for(i=0; i<len; i++)
    {
        
        if(a[i]!='a' && a[i]!='o' && a[i]!='y' && a[i]!='e' && a[i]!='u' && a[i]!='i')
        {
            b[j] = '.';
            b[j+1] = a[i];
            j+=2;
        }
    }

    for(i=0; i<j; i++)
        printf("%c",b[i]);
    
    return 0;
}