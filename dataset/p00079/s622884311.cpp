#include <iostream>
#include <cmath>
using namespace std;

double S(double a, double b, double c){
	double z = (a + b + c) / 2;
	double zz = z * (z - a) * (z - b) * (z - c);
	return sqrt(zz);
}

double D(double x, double y, double xx, double yy){
	double k = pow(xx - x, 2) + pow(yy - y, 2);
	return sqrt(k);
}

int main(){
	double gnx, gny, x[2] = {}, y[2] = {}, ans = 0;
	char knm;
	cin >> gnx >> knm >> gny;
	x[0] = gnx;
	y[0] = gny;
	while (cin >> x[1] >> knm >> y[1]){
		double a, b, c;
		a = D(gnx, gny, x[0], y[0]);
		b = D(gnx, gny, x[1], y[1]);
		c = D(x[0], y[0], x[1], y[1]);
		double an = S(a, b, c);
		ans += an;
		x[0] = x[1];
		y[0] = y[1];
	}
	cout << ans << endl;
	return 0;
}