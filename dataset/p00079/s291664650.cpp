#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{	
	double a, b, c, d, x, y, s = 0;
	char t;

	cin >> a >> t >> b >> c >> t >> d;

	while (cin >> x >> t >> y) {
		s += abs((c - a) * (y - b) - (d - b) * (x - a)) * 0.5;
		c = x;
		d = y;
	}

	cout << fixed << setprecision(6) << s << endl;

	return 0;
}

