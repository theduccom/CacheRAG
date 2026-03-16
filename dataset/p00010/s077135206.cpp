#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	double x1, y1, x2, y2, x3, y3;
	double a1, a2, b1, b2, c1, c2;
	double a, b, c;
	double A;
	double xp, yp, r;
	while (cnt > 0 && cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
		// ?????\??????????????§?¨?????±???????
		a1 = 2 * (x2 - x1);
		b1 = 2 * (y2 - y1);
		c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
		a2 = 2 * (x3 - x1);
		b2 = 2 * (y3 - y1);
		c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;
		xp = (double)((b1*c2 - b2*c1) / (a1*b2 - a2*b1) * 1000) / 1000.0;
		yp = (double)((c1*a2 - c2*a1) / (a1*b2 - a2*b1) * 1000) / 1000.0;

		// ?????\????????????????±???????
		r = hypot(xp - x1, yp - y1);

		cout << fixed << setprecision(3);
		cout << xp << " " << yp << " " << r << endl;
		cnt -= 1;
	}
	return 0;
}