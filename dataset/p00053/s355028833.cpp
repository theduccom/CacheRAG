#include<iostream>
#include<cmath>
using namespace std;
int x[1000000], y[100000], n, cnt;
int main() {
	for (int i = 2; i < 200000; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) { goto E; }
		}
		x[i] = 1;
	E:;
	}
	for (int i = 0; i < 200000; i++) {
		if (x[i] == 1) { cnt++; y[cnt] = y[cnt - 1] + i; }
	}
	while (1) {
		cin >> n; if (!n) { break; }
		cout << y[n] << endl;
	}
}