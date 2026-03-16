#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = 0;i < n;i++) {
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		double px, py, r;
		 double A1, B1, C1, A2, B2, C2;
		A1 = 2 * (x2 - x1);
		B1 = 2 * (y2 - y1);
		C1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
		A2 = 2 * (x3 - x1);
		B2 = 2 * (y3 - y1);
		C2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;

		px = (B1*C2 - B2*C1) / (A1*B2 - A2*B1);
		py = (C1*A2 - C2*A1) / (A1*B2 - A2*B1);

		r = sqrt((x1 - px)*(x1 - px) + (y1 - py)*(y1 - py));

		cout << fixed << setprecision(3) << px << " ";
		cout << fixed << setprecision(3) << py << " ";
		cout << fixed << setprecision(3) << r << endl;
	}
	return 0;

}