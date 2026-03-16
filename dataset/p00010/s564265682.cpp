#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	int n;
	cin >> n;
	double distanceA, distanceB, distanceC, sinA, r, p, q;
	for (int i = 0; i < n; ++i) 
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		distanceA = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3)), distanceB = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3)), distanceC = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	    sinA = sqrt(1.0 - pow((pow(distanceB, 2) + pow(distanceC, 2) - pow(distanceA, 2)) / (distanceB*distanceC * 2), 2));
		r = distanceA / (2 * sinA);
		p = ((y1 - y3)*(y1 * y1 - y2 * y2 + x1 * x1 - x2 * x2) - (y1 - y2)*(y1 * y1 - y3 * y3 + x1 * x1 - x3 * x3)) / (2 * (y1 - y3)*(x1 - x2) - 2 * (y1 - y2)*(x1 - x3));
		q = ((x1 - x3)*(x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2) - (x1 - x2)*(x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3)) / (2 * (x1 - x3)*(y1 - y2) - 2 * (x1 - x2)*(y1 - y3));

		cout << fixed << setprecision(3) << p << " " << q << " " << r << endl;
	}

	return 0;
}