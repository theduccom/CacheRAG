#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>

using namespace std;

typedef long long int lli;

int main() {
	int n;
	double xy[3][3],x,y;
	double a, b, c, d, e, f, radius;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				cin >> xy[j][k];
			}
		}
		a = -2 * (xy[0][0]-xy[1][0]);
		b = -2 * (xy[0][1] - xy[1][1]);
		c = -1 * (pow(xy[0][0], 2) + pow(xy[0][1], 2)) + pow(xy[1][0], 2) + pow(xy[1][1], 2);
		d = -2 * (xy[0][0] - xy[2][0]);
		e = -2 * (xy[0][1] - xy[2][1]);
		f = -1 * (pow(xy[0][0], 2) + pow(xy[0][1], 2)) + pow(xy[2][0], 2) + pow(xy[2][1], 2);
		y = (a*f - c*d) / (a*e - b*d);
		x = (c*e - b*f) / (a*e - b*d);
		if (x == 0) x = 0;
		if (y == 0) y = 0;
		radius =sqrt(pow((x-xy[0][0]),2)+pow((y-xy[0][1]),2));

		cout << fixed << setprecision(3) << x << " " << y << " "<< radius <<endl;
	}
	return 0;
}