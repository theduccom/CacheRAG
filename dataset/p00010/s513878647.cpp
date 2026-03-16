#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int n;
	double xa, ya, xb, yb, xc, yc;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> xa >> ya >> xb >> yb >> xc >> yc;
		double a, b, c;
		a = (xb - xc) * (xb - xc) + (yb - yc) * (yb - yc);
		b = (xc - xa) * (xc - xa) + (yc - ya) * (yc - ya);
		c = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
		double px, py, r;
		px = a * (b + c - a) * xa + b * (c + a - b) * xb + c * (a + b - c) * xc;
		py = a * (b + c - a) * ya + b * (c + a - b) * yb + c * (a + b - c) * yc;
		px /= a * (b + c - a) + b * (c + a - b) + c * (a + b - c);
		py /= a * (b + c - a) + b * (c + a - b) + c * (a + b - c);
		a = sqrt(a);
		b = sqrt(b);
		c = sqrt(c);
		r = a * b * c / sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c));
		cout << fixed << setprecision(3) << px << ' ' << py << ' ' << r << endl;
	}
	return 0;
}