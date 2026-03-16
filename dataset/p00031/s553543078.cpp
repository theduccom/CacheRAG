#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n) {
		bool flag = false;
		for (int i = 0; i < 10; i++) {
			if (n & (1 << i)) {
				if (flag) {
					cout << ' ';
				}
				cout << (1 << i);
				flag = true;
			}
		}
		cout << endl;
	}
	return 0;
}