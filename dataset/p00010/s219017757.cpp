#include <cmath>
#include <iostream>
using namespace std;
int n; double ax, ay, bx, by, cx, cy;
int main() {
	cin >> n;
	while (n--) {
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		double a1 = 2 * (bx - ax);
		double b1 = 2 * (by - ay);
		double c1 = ax * ax - bx * bx + ay * ay - by * by;
		double a2 = 2 * (cx - ax);
		double b2 = 2 * (cy - ay);
		double c2 = ax * ax - cx * cx + ay * ay - cy * cy;
		double x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		double y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
		double r = hypot(ax - x, ay - y);
		printf("%.3f %.3f %.3f\n", x, y, r);
	}
	return 0;
}