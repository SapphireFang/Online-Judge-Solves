#include<stdio.h>
void recursion(int);
int main()
{
    int n;

    scanf("%d",&n);

    recursion(n);
}

void recursion(int x)
{
    if(x==0)
        return;
    else
        printf("I love Recursion\n");

    return recursion(x-1);
}
