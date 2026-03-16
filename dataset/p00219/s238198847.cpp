#include <iostream>
#include <cstring>
#include <string.h>
#include <algorithm>

using namespace std;

int SumOfIce[10];

int main() {
	int n, num;

	while (cin >> n, n) {
		memset(SumOfIce, 0, sizeof(SumOfIce));
		for (int i = 0; i < n; ++i) {
			cin >> num;
			SumOfIce[num]++;
		}
		for (int i = 0; i < 10; ++i) {
			if (SumOfIce[i] == 0) {
				cout << "-" << endl;
				continue;
			}
			for (int j = 0; j < SumOfIce[i]; ++j) {
				cout << "*";
			}
			cout << endl;
		}
	}

	return 0;
}
