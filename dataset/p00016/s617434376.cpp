#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x=0, y=0, a, b, now = 90;
	char c;
	while (cin >> a >> c >> b, a || b) {
		x += a * cos(M_PI * now / 180);
		y += a * sin(M_PI * now / 180);
		now = now - b;
	}
	if (x >= 0) x = floor(x);
	else if (x < 0) x = ceil(x);
	if (y >= 0) y = floor(y);
	else if (y < 0) y = ceil(y);
		cout << x << endl;
		cout << y << endl;
}