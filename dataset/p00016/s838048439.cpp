#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	char c;
	double rad = M_PI / 2.0, x = 0, y = 0;
	for (cin >> a >> c >> b; a || b; cin >> a >> c >> b) {
		x += a*cos(rad);
		y += a*sin(rad);
		rad -= (b / 180.0 * M_PI);
		/*
		if (rad < -M_PI) {
			rad += (2 * M_PI);
		}
		else if (rad>M_PI) {
			rad -= (2 * M_PI);
		}*/
	}
	cout << int(x) << endl << int(y) << endl;
	return 0;
}