#include <iostream>
#include <cmath>

#define SQ(x) ((x)*(x))

using namespace std;

int main(void)
{
	int n = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		double x1 = 0.0, y1 = 0.0;
		double x2 = 0.0, y2 = 0.0;
		double x3 = 0.0, y3 = 0.0;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		double a = x1 - x2;
		double b = y1 - y2;
		double c = SQ(x2) + SQ(y2) - SQ(x1) - SQ(y1);
		double d = x2 - x3;
		double e = y2 - y3;
		double f = SQ(x3) + SQ(y3) - SQ(x2) - SQ(y2);
		
		double l = (c * e - b * f) / (a * e - b * d);
		double m = (a * f - c * d) / (a * e - b * d);
		double n = -1.0 * (SQ(x1) + SQ(y1) + l * x1 + m * y1);
		
		double centerX = l / -2.0;
		double centerY = m / -2.0;
		double radius = sqrt( SQ(l) / 4.0 + SQ(m) / 4.0 - n );
		
		cout.precision(3);
		cout << fixed << centerX << " " << centerY << " " << radius << endl;
	}
	
	return 0;
}