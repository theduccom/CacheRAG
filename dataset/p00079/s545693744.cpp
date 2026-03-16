#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Point {
public:
	double x;
	double y;
};

const double esp = 1e-10;


double Cross(Point p0, Point p1, Point p2) {
	return (p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y);
}

int main(void) {
	int n, i;
	double sum;
	Point pointSet[21];
	char c;

	n = 0;
	while (cin >> pointSet[n].x >> c >> pointSet[n].y) {
		n++;
	}

	sum = 0;
	for (i = 1; i < n-1; i++) {
		sum += Cross(pointSet[0], pointSet[i], pointSet[i + 1]);
	}

	cout << fixed << setprecision(6) << sum / 2 << endl;

	return 0;
}


