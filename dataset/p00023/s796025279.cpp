#include <cmath>
#include <iostream>

struct Circle2D {
	double x, y, r;
	static int Intersection(Circle2D &a, Circle2D &b);
};

int Circle2D::Intersection(Circle2D &a, Circle2D &b) {
	double diffABx = b.x - a.x, diffABy = b.y - a.y;
	double distanceCenterAB2 = diffABx * diffABx + diffABy * diffABy;
	double distanceCenterAB = sqrt(distanceCenterAB2);
	if (distanceCenterAB2 <= (a.r + b.r) * (a.r + b.r)) {
		if (a.r > b.r + distanceCenterAB) {
			return 2;
		}
		if (b.r > a.r + distanceCenterAB) {
			return -2;
		}
		return 1;
	}
	return 0;
}

int main() {
	int dataSet;
	Circle2D ca, cb;
	for (std::cin >> dataSet; dataSet > 0; --dataSet) {
		std::cin >> ca.x >> ca.y >> ca.r >> cb.x >> cb.y >> cb.r;
		std::cout << Circle2D::Intersection(ca, cb) << '\n';
	}
	return 0;
}