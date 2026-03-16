#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	double px, py, r;
	int n;
	cin >> n;
	
	cout << fixed << setprecision(3);
	
	for (int i=0; i<n; i++) {
		cin >> x1; cin >> y1; cin >> x2; cin >> y2; cin >> x3; cin >> y3;

		double a,b,c,d,e,f;
		a = 2 * (x2 - x1);
		b = 2 * (y2 - y1);
		c = 2 * (x3 - x1);
		d = 2 * (y3 - y1);
		e = x2 * x2 + y2 * y2 - x1 * x1 - y1 * y1;
		f = x3 * x3 + y3 * y3 - x1 * x1 - y1 * y1;
		
		if (a*d==b*c) continue;
		
		double D = a*d - b*c;
		
		px = (d*e  - b*f) / D; px += 0;
		py = (-c*e + a*f) / D; py += 0;
		r  = sqrt((x1-px)*(x1-px) + (y1-py)*(y1-py));
		
		cout << px << " " << py << " " << r << endl;
	}
	
	return 0;
}