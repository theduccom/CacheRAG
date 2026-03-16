#include<iostream>
using namespace std;
int x[10000], y[10000][10000], a, b, cnt2;

void uruu(int s) {
	for (int i = 0; i < s; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			x[i] = 1;
		}
	}
}

void hantei(int start, int end) {
	int cnt = 0;
	for (int i = start; i <= end; i++) {
		if (x[i]) { cout << i << endl; cnt++; }
	}
	if (!cnt) { cout << "NA" << endl; }
}

int main() {
	uruu(10000);
	while (true) {
		cin >> a >> b; if (!a) { break; }
		if (cnt2) { cout << endl; }
		cnt2++;
		hantei(a, b);
	}
}