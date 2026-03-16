//#Circumscribed Circle of a Triangle

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3;
	double px, py, r;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		px = ((x2*x2+y2*y2-x1*x1-y1*y1)*(y1-y3) - (x3*x3+y3*y3-x1*x1-y1*y1)*(y1-y2)) / (-2*((x1-x2)*(y1-y3) - (x1-x3)*(y1-y2)));
		py = ((x2*x2+y2*y2-x1*x1-y1*y1)*(x1-x3) - (x3*x3+y3*y3-x1*x1-y1*y1)*(x1-x2)) / (-2*((y1-y2)*(x1-x3) - (y1-y3)*(x1-x2)));
		r = sqrt((x1-px)*(x1-px) + (y1-py)*(y1-py));
		
		printf("%.3f %.3f %.3f\n", px, py, r);
	}
	return 0;
}