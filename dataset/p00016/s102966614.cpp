#define _USE_MATH_DEFINES

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main() {
	int d, a; double rad = 0; double x = 0, y = 0;
	while (true) {
		scanf("%d,%d", &d, &a);
		if (d == 0 && a == 0)break;
		y += d*cos(rad*M_PI/180);
		x += d*sin(rad*M_PI/180);
		rad =rad+a;
	}
	cout <<int(x) << endl <<int(y) << endl;
}