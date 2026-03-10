#include <stdio.h>
int main()
{
    unsigned char i,n;
    for(n=1;n<=9;n++)for(i=1;i<=9;i++)printf("%dx%d=%d\n",n,i,n*i);
}