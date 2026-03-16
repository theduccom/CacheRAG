#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	double x[20], y[20];
	double a, b;
	int c = 0;
	char ch;
	while(cin >> a >> ch >> b) {
		x[c] = a, y[c] = b;
		c++;
	}
	double ret = 0;
	rep2(i,1,c-1) {
		double d = sqrt(pow(x[i]-x[0],2.0) + pow(y[i]-y[0],2.0));
		double e = sqrt(pow(x[i+1]-x[0],2.0) + pow(y[i+1]-y[0],2.0));
		double f = sqrt(pow(x[i]-x[i+1],2.0) + pow(y[i]-y[i+1],2.0));
		double z = (d+e+f)/2;
		ret += sqrt(z*(z-d)*(z-e)*(z-f));
	}
	printf("%.6lf\n", ret);
	return 0;
}