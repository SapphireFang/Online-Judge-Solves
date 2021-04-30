#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,j;

    scanf("%d%d",&n,&t);

    char a[n+1];

    scanf("%s",&a);

    while(t--)
    {
        for(j=0; j<n; )
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                a[j] = 'G';
                a[j+1] = 'B';
                j+=2;
            }
        else
            j++;
        }
    }

    puts(a);

    return 0;
}