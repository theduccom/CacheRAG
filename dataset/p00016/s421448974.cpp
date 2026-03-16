#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double PI = 3.1415926535;

int main(){
	int n, th;
	double x = 0;
	double y = 0;
	int nth = 90;
	while(scanf("%d,%d", &n, &th)){
		if(!n&&!th) break;
		x += n*cos(PI*nth/180);
		y += n*sin(PI*nth/180);
		nth -= th;
		nth %= 360;
	}
	printf("%d\n", x > 0 ? int(x) : -1*int(-1*x));
	printf("%d\n", y > 0 ? int(y) : -1*int(-1*y));
	return 0;
}