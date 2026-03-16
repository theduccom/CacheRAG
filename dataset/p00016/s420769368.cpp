#include<cstdio>
#include<cmath>

int main(){
	double x = 0, y = 0;
	double a,b,d = 90;
	scanf("%lf,%lf", &a, &b);
	while(a || b){
		y += a * sin(d * M_PI / 180);
		x += a * cos(d * M_PI / 180);
		d -= b;
		scanf("%lf,%lf", &a, &b);
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}