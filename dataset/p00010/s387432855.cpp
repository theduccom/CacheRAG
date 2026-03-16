#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	int n;
	double x1, y1, x2, y2, x3, y3, a, b, c, d, e, f, x, y, r;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		a = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
		c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		d = acos((b * b + c * c - a * a) / (2 * b * c));
		e = acos((a * a + c * c - b * b) / (2 * a * c));
		f = acos((b * b + a * a - c * c) / (2 * b * a));
		x = (x1 * sin(d * 2) + x2 * sin(e * 2) + x3 * sin(f * 2)) / (sin(d * 2) + sin(e * 2) + sin(f * 2));
		y = (y1 * sin(d * 2) + y2 * sin(e * 2) + y3 * sin(f * 2)) / (sin(d * 2) + sin(e * 2) + sin(f * 2));
		r = a / (2 * sin(d));
		printf("%.3f %.3f %.3f\n",x,y,r);
	}
}