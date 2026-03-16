#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

double x, h;

double pyramid() {
	return (x * x + 4 * sqrt(h * h + x * x / 4) * x / 2);
}

int main() {
	while (true) {
		cin >> x;
		cin >> h;
		if (x == 0 && h == 0) {
			break;
		}
		printf("%.6lf\n", pyramid());
	}
}
