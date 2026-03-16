#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n,longth,sub1,sub2,num,mem;
char a[100],b[100],ans[100] = {0};
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s%s",a,b);
        sub1 = strlen(a);
        sub2 = strlen(b);
        longth = max(sub1,sub2);
        for(int i = 0; i < longth; i++)
        {
            ans[i] = '0';
        }
        if(strlen(a) < longth)
        {
            for(int i = sub1 - 1; i >= 0; i--)
            {
                a[i + longth - sub1] = a[i];
            }
            for(int i = 0; i < longth - sub1; i++)
            {
                a[i] = '0';
            }
        }
        if(strlen(b) < longth)
        {
            for(int i = sub2 - 1; i >= 0; i--)
            {
                b[i + longth - sub2] = b[i];
            }
            for(int i = 0; i < longth - sub2; i++)
            {
                b[i] = '0';
            }
        }
        for(int i = 0; i < longth; i++)
        {
            num = a[longth - 1 - i] - '0' + b[longth - 1 - i] - '0' + ans[i] - '0';
            ans[i] = (num % 10) + '0';
            if(10 <= num)ans[i + 1] = '1';
        }
        mem = strlen(ans);
        if(mem > 80)printf("overflow\n");
        else
        {
            for(int i = mem - 1; i >= 0; i--)
            {
                printf("%c",ans[i]);
            }
            printf("\n");
        }
        for(int i = 0; i < mem; i++)
        {
            ans[i] = 0;
        }
    }
    return 0;
}