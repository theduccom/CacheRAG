#include<stdio.h>
#include<math.h>
int main()
{
int N;
double v,y,x,t;
while(scanf("%lf",&v)!=EOF)
{

t=v/9.8;
y=4.9*t*t;
x=(y+5)/5;


N=(int)x;
N = (x - (double)N) ? N+1 : N;

printf("%d\n",N);
}
return 0;
}