#include<stdio.h>
#include<string.h>
int main()
{
    int t,k=1;
    char z[1];

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char a[101],b[101],temp,*result;
        int i,j,count1=0,count2=0,len1,len2;
        
        gets(a);
        gets(b);

        len1 = strlen(a);
        len2 = strlen(b);
        //for 1st string.
        for(i=0; i<len1; i++)
        {
            if(a[i]>=65 && a[i]<=90)
                a[i] = a[i]+32;
        }

        for(i=0; i<len1; i++)
        {
            if(a[i]!=' ')
            {
                a[count1] = a[i];
                count1++;
            }
        }

        a[count1] = '\0';

        for(i=0; i<count1; i++)
        {
            for(j=0; j<count1-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        //for 2nd string.
        for(i=0; i<len2; i++)
        {
            if(b[i]>=65 && b[i]<=90)
                b[i] = b[i]+32;
        }

        for(i=0; i<len2; i++)
        {
            if(b[i]!=' ')
            {
                b[count2] = b[i];
                count2++;
            }
        }

        b[count2] = '\0';

        for(i=0; i<count2; i++)
        {
            for(j=0; j<count2-i-1; j++)
            {
                if(b[j]>b[j+1])
                {
                    temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }
    
        result = strstr(a,b);

        if(result)
            printf("Case %d: Yes\n",k);
        else
            printf("Case %d: No\n",k);

        k++;
    }

    return 0;
}
