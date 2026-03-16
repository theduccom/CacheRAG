#include<iostream>
#include<cstdio>
#include<cmath>

double PI = 3.141592653589793238;

int main() {
	double x = 0.0, y = 0.0, dir = PI / 2;
	while (true) {
		int d, a;
		std::scanf("%d,%d", &d, &a);
		if (d == 0 && a == 0) break;
		x += std::cos(dir) * d;
		y += std::sin(dir) * d;
		dir -= a * PI / 180;
	}
	int ix = x, iy = y;
	std::cout << ix << std::endl << iy << std::endl;
	return 0;
}