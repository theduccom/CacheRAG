#include<iostream>
using namespace std;
int x[3] = { 0,1,2 }, p, q, d, e; char a, b, c;
int main() {
	while (cin >> a >> c >> b) {
		if (a == 'A') {
			p = 0;
		}
		if (a == 'B') {
			p = 1;
		}
		if (a == 'C') {
			p = 2;
		}
		if (b == 'A') {
			q = 0;
		}
		if (b == 'B') {
			q = 1;
		}
		if (b == 'C') {
			q = 2;
		}
		d = x[p];
		e = x[q];
		x[p] = e;
		x[q] = d;
	}
	for (int i = 0; i < 3; i++) {
		if (x[i] == 0) {
			p = i;
		}
	}
	if (p == 0) {
		cout << 'A' << endl;
	}
	if (p == 1) {
		cout << 'B' << endl;
	}
	if (p == 2) {
		cout << 'C' << endl;
	}
	return 0;
}