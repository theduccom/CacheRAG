#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int n;
double a, b, c, d, e, f;
double x[3], y[3];
double r;
double px, py;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

		a = x[0] - x[1];
		b = y[0] - y[1];
		c = (x[1]*x[1] - x[0]*x[0] + y[1]*y[1] - y[0]*y[0]) / 2;
		d = x[2] - x[0];
		e = y[2] - y[0];
		f = (x[0]*x[0] - x[2]*x[2] + y[0]*y[0] - y[2]*y[2]) / 2;

		px = -(c * e - f * b) / (a * e - d * b);
		py = -(c * d - f * a) / (b * d - e * a);
		r = sqrt((x[0] - px) * (x[0] - px) + (y[0] - py) * (y[0] - py));

		printf("%.3f %.3f %.3f\n", px, py, r);
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/