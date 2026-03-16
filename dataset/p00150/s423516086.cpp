#include <bits/stdc++.h>

using namespace std;

bool PrimeData[10001] = { false,false,true,true };

void findPrimeNumber() {
	int limit;
	bool flag;

	for (int num = 5; num < 10001; num += 2) {
		limit = sqrt(num) + 1;
		flag = true;
		for (int j = 2; j < limit; j++) {
			if (num%j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			PrimeData[num] = true;
		}
	}
}

int main() {
	int n;

	findPrimeNumber();

	while (cin >> n, n) {
		while (n > 4) {
			if (PrimeData[n] && PrimeData[n - 2]) {
				cout << n - 2 << " " << n << endl;
				break;
			}
			n--;
		}
	}

	return 0;
}
