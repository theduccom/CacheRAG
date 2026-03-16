#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
#define PI (acos(-1))

int main() {
	int d,a,kakudo=0;
	long double x=0, y=0;
	while (1) {
		scanf("%d,%d", &d, &a);
		if (d == 0 && a == 0)
			break;
		y += d*cos(kakudo*PI / 180.0);
		x += d*sin(kakudo*PI / 180.0);
		kakudo = (kakudo + a) % 360;
	}
	cout << (int)x << endl << (int)y <<endl;
	return 0;
}
