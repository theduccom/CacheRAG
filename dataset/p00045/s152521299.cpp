#include<stdio.h>
int main()
{

int x,n,c;
double sum,ave;
sum=0;c=0;ave=0;
while(scanf("%d,%d",&x,&n)!=EOF)
{
sum=sum+(x*n);
ave+=n;
c++;
}

ave=ave/c;
ave+=0.5;
printf("%.0lf\n%.0lf\n",sum,ave);
return 0;
}