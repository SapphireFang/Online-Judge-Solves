#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        long long int l,i,flag=0,count=0;
        
        scanf("%lld",&l);

        char s[l+1];

        scanf("%s",&s);

        for(i=0; i<l; i++)
        {
            if(s[i]=='1')
                count++;

            if((count*2)>=(i+1))
            {
                flag++;
                break;
            }
                
        }
        
        
        if(flag!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
