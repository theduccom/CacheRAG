#include<cstdio>
int main()
{
    int n,zero,five,am;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        zero=0;
        five=1;
        while(1)
        {
            five*=5;
            am=n/five;
            zero+=am;
            if(five>n)break;
        }
        printf("%d\n",zero);
    }
    return 0;
}