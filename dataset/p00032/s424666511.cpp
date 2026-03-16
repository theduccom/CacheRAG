#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b, c;
	int rec = 0, rho = 0;

	while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {
		if (a == b) {
			rho++;
		}
		if ((a * a) + (b * b) == (c * c)) {
			rec++;
		}
	}
	cout << rec << endl << rho << endl;
}