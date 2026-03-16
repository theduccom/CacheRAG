#include <cmath>
#include <stdio.h>

const double PI = 3.141592653589;

int main()
{
	int len,deg;
	double x,y,deg_sum;
	x = 0;
	y = 0;
	deg_sum = 0;
	scanf("%d,%d",&len, &deg);
	while(len != 0 || deg != 0){
		x += sin(deg_sum * PI / 180) * (double)len;
		y += cos(deg_sum * PI / 180) * (double)len;
		deg_sum += (double)deg;
		scanf("%d,%d",&len, &deg);
	}
	printf("%d\n%d\n",(int)x,(int)y);
	return 0;
}