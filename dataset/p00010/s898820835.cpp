#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		double a = y2 - y1;
		double b = x2 - x1;
		double c = (x2*x2 - x1*x1 + y2*y2 - y1*y1)/2;
		double d = y3 - y2;
		double e = x3 - x2;
		double f = (x3*x3 - x2*x2 + y3*y3 - y2*y2)/2;

		double px = (c*d - a*f) / (b*d - a*e);
		double py = (c*e - b*f) / (a*e - d*b);

		double r = sqrt((px - x1)*(px - x1) + 
			(py - y1)*(py - y1));

		cout << fixed << setprecision(3);
		cout << px << " " << py << " " << r << endl;
	}

	return 0;
}