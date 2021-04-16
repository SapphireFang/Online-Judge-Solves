#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char w[100];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",&w);

        len = strlen(w);

        if(len<=10)
        {
            printf("%s\n",w);
        }

        else
        {
            printf("%c%d%c\n",w[0],len-2,w[len-1]);
        }
    }

    return 0;
}
