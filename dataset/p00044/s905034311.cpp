#include<iostream>
#include<cmath>
using namespace std;
int x[1000000];
int main() {
	for (int i = 2; i < 1000000; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				goto E;
			}
		}
		x[i] = 1;
	E:;
	}
	int a, b;
	while (cin >> a) {
		for (int i = a - 1; i >= 0; i--) {
			if (x[i] == 1) { cout << i << ' '; break; }
		}
		for (int i = a + 1; i < 1000000; i++) {
			if (x[i] == 1) { cout << i << endl; break; }
		}
	}
}