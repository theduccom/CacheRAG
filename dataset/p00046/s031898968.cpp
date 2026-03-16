#include<stdio.h>

int main ()
{
double H,max,min;
max=0;min=0;
while(scanf("%lf",&H)!=EOF)
{
	
if(H>max)max=H;
else if(H<min)min=H;
if(min==0)min=H;
}
printf("%lf",max-min);
return 0;
}