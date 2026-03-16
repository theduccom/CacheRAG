#include<stdio.h>
#include<math.h>

int main()
{
double a;
while(~scanf("%lf",&a))
{
int ans=ceil(a*a/98)+1;
printf("%d\n",ans);
}
return 0;
}