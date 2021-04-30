#include<stdio.h>
int main()
{
    int n,temp,count1=0,count2=0;

    scanf("%d",&n);

    temp = n;

    while(temp!=0)
    {
        if(temp%10==4 || temp%10==7)
            count1++;

        temp = temp/10;
        count2++;
    }

    if(count1==count2 || n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%474==0 || n%477==0)
        printf("YES\n");

    else
    printf("NO\n");

    return 0;
}