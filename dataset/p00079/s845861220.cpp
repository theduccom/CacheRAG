#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

#define N 100 //頂点の最大個数

int main(void) {
	double x[N], y[N];
	int n; //頂点の個数
	double S; //面積
	
	n = 0;
	while(scanf("%lf,%lf", &x[n], &y[n]) != EOF) ++n;
	
	//座標(x[0],y[0])を含む三角形の面積を求める。
	S = 0;
	for(int i = 2; i < n; ++i) {
		int p1 = i - 1;
		int p2 = i;
		double a, b, c, z;
		a = sqrt((x[p1]-x[0])*(x[p1]-x[0]) + (y[p1]-y[0])*(y[p1]-y[0]));
		b = sqrt((x[p2]-x[0])*(x[p2]-x[0]) + (y[p2]-y[0])*(y[p2]-y[0]));
		c = sqrt((x[p1]-x[p2])*(x[p1]-x[p2]) + (y[p1]-y[p2])*(y[p1]-y[p2]));
		z = (a + b + c) / 2;
		S += sqrt(z * (z-a) * (z-b) * (z-c));
	}
	
	printf("%.6lf\n", S);
	
	return 0;
}
