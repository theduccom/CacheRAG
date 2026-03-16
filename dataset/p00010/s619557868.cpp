#include <iostream>
#include <cstdio>
#include <cmath>
#define double long double
using namespace std;

double marume( double x ){
	long long t = x * 1000 + ((x > 0) ? 1 : -1) * 0.5;
	return t/1000.0;
}

int main(){
	int n;
	double tx, ty, x1, y1, x2, y2;
	
	cin >> n;
	while(n--){
		cin >> tx >> ty >> x1 >> y1 >> x2 >> y2;
		x1 -= tx; y1 -= ty;
		x2 -= tx; y2 -= ty;
		
		double dist1 = x1 * x1 + y1 * y1;
		double dist2 = x2 * x2 + y2 * y2;
		x1 *= 2; y1 *= 2;
		x2 *= 2; y2 *= 2;
		
		double detA = x1 * y2 - y1 * x2;
		double detX = dist1 * y2 - y1 * dist2;
		double detY = x1 * dist2 - dist1 * x2;
		double x = detX / detA; //if(x < 0){ x -= 1e-5; } else { x += 1e-5; }
		double y = detY / detA; //if(y < 0){ y -= 1e-5; } else { y += 1e-5; }
		double r = hypot(x, y) + 1e-7;
		
		x += tx;
		y += ty;
		
		x = marume(x);
		y = marume(y);
		r = marume(r);
		printf("%.3Lf %.3Lf %.3Lf\n", x, y, r);
	}
	return 0;
}