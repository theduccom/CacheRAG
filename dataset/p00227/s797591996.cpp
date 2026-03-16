#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m, n, m) {
		int p[1000];
		int sum = 0;

		for (int i = 0;i < n;i++) { 
			cin >> p[i];
			sum += p[i];
		}

		sort(p, p+ n);
		reverse(p, p + n);

		for (int i = m - 1;i < n;i += m) {
			sum -= p[i];
		}
		cout << sum << endl;
	}
	return 0;
}