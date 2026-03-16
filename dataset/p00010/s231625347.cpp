#include <iostream>
#include <vector>
#include<iomanip>
#include <math.h>
using namespace std;

struct Circles {
	double x;
	double y;
	double r;
};

Circles countCircle(double x1,double y1, double x2, double y2, double x3, double y3){
	double a = ((y2 - y1)*(y3*y3 - y1 * y1 + x3 * x3 - x1 * x1) - (y3 - y1)*(y2*y2 - y1 * y1 + x2 * x2 - x1 * x1)) / (2.0*((x3 - x1)*(y2 - y1) - (x2 - x1)*(y3 - y1)));
	double b = ((x2 - x1)*(x3*x3 - x1 * x1 + y3 * y3 - y1 * y1) - (x3 - x1)*(x2*x2 - x1 * x1 + y2 * y2 - y1 * y1)) / (2.0*((y3 - y1)*(x2 - x1) - (y2 - y1)*(x3 - x1)));
	double r = sqrt((x1 - a)*(x1 - a) + (y1 - b)*(y1 - b));
	return Circles{ a,b,r };
}


int main() {
	vector<Circles> dst;
	int n;
	double x1, y1, x2, y2, x3, y3;
	cin >> n;
	while (n-->0) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		dst.push_back(countCircle(x1, y1, x2, y2, x3, y3));
	}
	for (vector<Circles>::iterator it = dst.begin(); it < dst.end(); it++) {
		cout.setf(ios::fixed);
		cout << fixed << setprecision(3) << (*it).x << " " << (*it).y << " " << (*it).r << endl;
	}
	return 0;
}
