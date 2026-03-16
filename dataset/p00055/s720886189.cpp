#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	double d;
	while (cin >> d) {
		double n=d;
		for (int i = 2; i <= 10; i++) {
			if (i % 2 == 0) {
				n = n * 2;
			}
			else if (i % 2 == 1) {
				n = n / 3;
			}
			d += n;
		}
		printf("%.8lf\n", d);
	}
}
