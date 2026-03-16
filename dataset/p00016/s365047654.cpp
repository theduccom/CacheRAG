#include <iostream>
#include <cmath>
#include <cstdio>
const double PI = 3.141592;
using namespace std;
int main (int argc, char *argv[]) {
	double x = 0.0, y = 0.0;
	int size, t_deg;
	double deg = 90.0;
	while (true) {
		scanf("%d,%d",&size,&t_deg);
		//cout << x << " " << y << endl;
		x += -cos(deg * PI / 180.0) * size;
		y += sin(deg * PI / 180.0) * size;
		if (size == 0 && t_deg == 0) break;
		deg += t_deg;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
	return 0;
}