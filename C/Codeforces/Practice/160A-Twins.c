#include<stdio.h>
int main()
{
    int n,i,j,temp,sum=0,result=0,count=0;

    scanf("%d",&n);

    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    } 

    for(i=0; i<n; i++)
    {
        result = result+a[i];
        count++;
        
        if(result>sum/2)
            break;
    }

    printf("%d\n",count);

    return 0;
}
