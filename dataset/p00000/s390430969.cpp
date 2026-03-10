#include<stdio.h>

int main()
{
    int i,j,mt=0;

    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
           mt = i * j;
           printf("%dx%d=%d\n",i,j,mt);
        }

    }
    return 0;
}