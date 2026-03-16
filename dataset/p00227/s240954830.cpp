#include<iostream>
#include<algorithm>
using namespace std;
int n, m, x[1000000];
long long sum1, sum2;
int main() {
	while (true) {
		sum1 = 0; sum2 = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) { break; }
		for (int i = 0; i < n; i++) {
			cin >> x[i];
			sum1 += x[i];
		}
		sort(x, x + n);
		for (int i = n - m; i >= 0; i -= m) {
			sum2 += x[i];
		}
		cout << sum1 - sum2 << endl;
	}
	return 0;
}