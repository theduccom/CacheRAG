#include<bits/stdc++.h>

using namespace std;


bool cmp(const int &p1, const int &p2) {
	return p1 > p2;
}

int main() {
	int n, m, sum;
	int price[1000];

	while (cin >> n >> m, n) {
		memset(price, 0, sizeof(price));
		for (int i = 0; i < n; ++i) {
			cin >> price[i];
		}
		sort(price, price + n,cmp);
		
		sum = 0;
		for (int i = 0; i < n; ++i) {
			//cout << price[i] << " ";
			if ((i + 1) % m == 0) {
				price[i] = 0;
			}
			sum += price[i];
		}
		cout << sum << endl;
	}

	return 0;
}
