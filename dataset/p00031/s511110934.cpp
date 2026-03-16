#include<stdio.h>
int ex(int n)
{
    if(n == 0)return 1;
    return ex(n - 1) * 2;
}
int main()
{
    int n;
    while(scanf("%d",&n) != -1)
    {
        int mem[10] = {0};
        for(int i = 9; i >= 0; i--)
        {
            if(n >= ex(i))mem[i] = 1,n -= ex(i);
        }
        n = 0;
        for(int i = 0; i < 10; i++)
        {
            if(mem[i] == 1)
            {
                if(n != 0)printf(" ");
                printf("%d",ex(i)),n++;
            }
        }
        printf("\n");
    }
    return 0;
}