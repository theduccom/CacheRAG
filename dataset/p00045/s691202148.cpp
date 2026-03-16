#include<cstdio>
int main()
{
    int ta,su,sum=0,ave=0,i=0;
    while(scanf("%d,%d",&ta,&su)!=EOF)
    {
        sum+=ta*su;
        ave+=su;
        i++;
    }
    ave*=10;
    ave/=i;
    ave+=5;
    ave/=10;
    printf("%d\n%d\n",sum,ave);
    return 0;
}