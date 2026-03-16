#include<iostream>
using namespace std;
int n, a, b, c, maxn, num;
int main() {
	while (true) {
		cin >> n; maxn = 0; num = 0;
		if (n == 0) { break; }
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			if (maxn < b + c) {
				maxn = b + c;
				num = a;
			}
		}
		cout << num << ' ' << maxn << endl;
	}
}