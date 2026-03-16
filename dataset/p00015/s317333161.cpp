#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string S, T; int n, x[10000], a[10000], b[10000], cnt; char U[11] = "0123456789";
int main() {
	cin >> n;
	for (int times = 0; times < n; times++) {
		cin >> S >> T;
		memset(x, 0, sizeof(x));
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < 10; j++) {
				if (U[j] == S[i]) {
					a[S.size() - 1 - i] = j;
				}
			}
		}
		for (int i = 0; i < T.size(); i++) {
			for (int j = 0; j < 10; j++) {
				if (U[j] == T[i]) {
					b[T.size() - 1 - i] = j;
				}
			}
		}
		if (S.size() > 80 || T.size() > 80) {
			cout << "overflow" << endl; goto E;
		}
		for (int i = 0; i < 80; i++) {
			x[i] += (a[i] + b[i]) % 10;
			x[i + 1] += (a[i] + b[i]) / 10;
			if (x[i] >= 10) {
				x[i + 1] += x[i] / 10;
				x[i] %= 10;
			}
			if (x[i + 1] >= 10) {
				x[i + 2]++;
				x[i + 1] %= 10;
			}
		}
		cnt = 0;
		if (x[80] > 0) {
			cout << "overflow" << endl;
		}
		else {
			for (int i = 79; i >= 0; i--) {
				if (x[i] > 0 || i == 0) { cnt++; }
				if (cnt) { cout << x[i]; }
			}
			cout << endl;
		}
	E:;
	}
}