#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	double x, h, y;
	while(scanf("%lf%lf", &x, &h) != EOF){
		if(x+h == 0)break;
		y = sqrt((x/2.0)*(x/2.0) + h*h);
		printf("%f\n", x*y*2 + x*x);
	}
	return 0;
}