#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

// x: base length,  h: height of pyramid
double get_surface_area_of_pyramid(int x, int h) {
	double height_of_triangle = sqrt(x * x / 4.0 + h * h);

	return 2 * x * height_of_triangle + x * x;
}

int main(void) {
	int x, h; // 4角推

	while (cin >> x >> h) {
		if (x == 0 && h == 0) {
			break;
		}
		printf("%.6f\n",get_surface_area_of_pyramid(x, h));
	}

	return 0;
}