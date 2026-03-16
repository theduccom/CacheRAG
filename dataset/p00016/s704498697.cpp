#include<stdio.h>
#include<math.h>
int main()
{
	int k,h;
	double x=0,y=0,mk=0;
	do{
		scanf("%d,%d",&h,&k);
		x+=sin(mk*1.0/180*atan(1.0) * 4.0)*h;
		y+=cos(mk*1.0/180*atan(1.0) * 4.0)*h;
		mk+=k;
	}while(h!=0||k!=0);
	printf("%d\n%d\n",(int)x,(int)y);
	return 0;
}