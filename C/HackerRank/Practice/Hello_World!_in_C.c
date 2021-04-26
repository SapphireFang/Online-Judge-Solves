#include<stdio.h>
int main()
{
    char a[]="Hello, World!",b[100];

    gets(b);

    printf("%s\n%s\n",a,b);

    return 0;
}
