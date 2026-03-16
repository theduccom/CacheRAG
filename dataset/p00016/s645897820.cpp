#include<iostream>
#include<cmath>

using namespace std;

int main() {
	const double Pi = 3.14159265358979323846;
	// 初期値は北なので、９０度
	int angle = 90;
	double x = 0, y = 0;
	while (true) {
		// r:距離 a回転角
		int r, a;

		cin >> r;
		cin.ignore();
		cin	>> a;
		if (r == 0 && a == 0) {
			break;
		}

		double dx = r * cos(angle / 180.0 * Pi);
		double dy = r * sin(angle / 180.0 * Pi);

		x += dx;
		y += dy;

		angle -= a;
		if (angle >= 360) {
			angle %= 360;
		}
		else if (angle < 0) {
			angle += 360;
		}

	}
	cout << static_cast<int>(x) << endl << static_cast<int>(y) << endl;
}