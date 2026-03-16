#include<iostream>
#include<cmath>
using namespace std;
int x[100000], y[100000], n, sum;
int main() {
	for (int i = 2; i < 100000; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				goto E;
			}
		}
		x[i] = 1;
	E:;
	}
	while (true) {
		cin >> n; sum = 0; if (!n) { break; }
		for (int i = 2; i <= n / 2; i++) {
			if (x[i] == 1 && x[n - i] == 1) {
				sum++;
			}
		}
		cout << sum << endl;
	}
}