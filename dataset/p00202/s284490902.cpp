#include<iostream>

using namespace std;

bool isprime[1000001];//false????´???°

int main() {
	isprime[1] = true;
	int n, x;
	int price[30];

	for (int i = 2; i <= 1000000; i++) {
		if (!isprime[i]) {
			for (int j = i * 2; j <= 1000000; j += i) {
				isprime[j] = true;
			}
		}
	}

	while (cin >> n >> x, n * x) {
		bool isprice[1000001] = {};//??????????????????????????????true
		for (int i = 0; i < n; i++) {
			cin >> price[i];
			isprice[price[i]] = true;
		}
		for (int i = 1; i <= x; i++) {
			if (isprice[i]) {
				for (int j = 0; j < n; j++) {
					if (i + price[j] <= x) {
						isprice[i + price[j]] = true;
					}
				}
			}
		}
		int ans = 99999999;
		for (int i = x;i >= 1; i--) {
			if (!isprime[i] && isprice[i]) {
				ans = i;
				break;
			}
		}
		if (ans == 99999999)cout << "NA" << endl;
		else cout << ans << endl;
	}
	return 0;
}