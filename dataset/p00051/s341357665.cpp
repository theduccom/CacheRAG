#include <iostream>

#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int n;
	cin >> n;

	rep(i, n) {
		long seq, max = 0, min = 0;
		cin >> seq;
		int num[8];

		rep(j, 8) {
			num[j] = seq % 10;
			seq = (seq - num[j]) / 10;
		}

		rep(j, 8) {
			rep(k, 8 - j) {
				if (num[j + k] > num[j]) {
					swap(num[j], num[j + k]);
				}
			}
		}

		rep(j, 8) {
			max *= 10;
			max += num[j];
			min *= 10;
			min += num[7 - j];
		}

		cout << max - min << endl;
	}
	return 0;
}