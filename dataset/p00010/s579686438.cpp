#include <iostream>
#include <iomanip>
using namespace std;

double get_num(double x){
	x = x * 1000;
	if(x >= 0){
		x = (int)(x + 0.5);
		return ((double)x / 1000);
	} else {
		x = (int)(x - 0.5);
		return ((double)x / 1000);
	}
};

double sqrt(double x){
	double a = 0.0;
	double b = x;
	double p = 0.00001;
	while(b - a > p){
		double c = (a + b) / 2;
		if(c * c > x){
			b = c;
		} else {
			a = c;
		}
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		double x1, y1;
		double x2, y2;
		double x3, y3;
		double m12x, m12y;
		double m13x, m13y;
		double dx12, dy12;
		double dx13, dy13;
		double c12, c13;
		double xp, yp;
		double r;
		cin >> x1 >> y1 >> x2
			>> y2 >> x3 >> y3;
		m12x = (x1 + x2) / 2;
		m12y = (y1 + y2) / 2;
		m13x = (x1 + x3) / 2;
		m13y = (y1 + y3) / 2;
		dx12 = x2 - x1;
		dy12 = y2 - y1;
		dx13 = x3 - x1;
		dy13 = y3 - y1;
		c12 = m12x * dx12 + m12y * dy12;
		c13 = m13x * dx13 + m13y * dy13;
		yp = (c12 * dx13 - c13 * dx12) / (dy12 * dx13 - dy13 * dx12);
		if(dx12 == 0){
			xp = (c13 - (dy13 * yp)) / dx13;
		}else{
			xp = (c12 - (dy12 * yp)) / dx12;
		}
		r = sqrt((xp - x1) * (xp - x1) + ((yp - y1) * (yp - y1)));
		xp = get_num(xp);
		yp = get_num(yp);
		r = get_num(r);
		cout << fixed << setprecision(3) << xp << " " << yp << " " << r << endl;

	}
	return 0;
}