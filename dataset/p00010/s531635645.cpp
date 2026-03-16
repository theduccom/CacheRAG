#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
	double A1, A2, A3, B1, B2, B3, C1=1, C2=1, C3=1, E1, E2, E3, x, y, z, n;
	vector<double> X, Y, Z;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A1 >> B1 >> A2 >> B2 >> A3 >> B3;
		E1 = -A1*A1 - B1*B1;
		E2 = -A2*A2 - B2*B2;
		E3 = -A3*A3 - B3*B3;
		x = (E1*B2*C3 + E2*B3*C1 + E3*B1*C2 - E1*B3*C2 - E2*B1*C3 - E3*B2*C1) / (A1*B2*C3 + A2*B3*C1 + A3*B1*C2 - A1*B3*C2 - A2*B1*C3 - A3*B2*C1);
		y = (A1*E2*C3 + A2*E3*C1 + A3*E1*C2 - A1*E3*C2 - A2*E1*C3 - A3*E2*C1) / (A1*B2*C3 + A2*B3*C1 + A3*B1*C2 - A1*B3*C2 - A2*B1*C3 - A3*B2*C1);
		z = (A1*B2*E3 + A2*B3*E1 + A3*B1*E2 - A1*B3*E2 - A2*B1*E3 - A3*B2*E1) / (A1*B2*C3 + A2*B3*C1 + A3*B1*C2 - A1*B3*C2 - A2*B1*C3 - A3*B2*C1);
		double xr, yr, r;
		xr = -x / 2; yr = -y / 2; r = sqrt((x*x + y*y) / 4 - z);
		xr *= 1000; yr *= 1000; r *= 1000;
		if (xr >= 0)xr += 0.5;
		else xr -= 0.5;
		xr = int(xr);
		xr /= 1000;
		if (yr >= 0)yr += 0.5;
		else yr -= 0.5;
		yr = int(yr);
		yr /= 1000;
		r += 0.5;
		r = int(r);
		r /= 1000;
		X.push_back(xr);
		Y.push_back(yr);
		Z.push_back(r);
	}
	for (int i = 0; i < n; i++) {
		cout << fixed << setprecision(3) << X[i] << " " << Y[i] << " " << Z[i] << endl;
	}
	return 0;
}