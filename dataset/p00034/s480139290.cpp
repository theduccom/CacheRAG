#include <bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int l[11], v1, v2;
	while (cin >> l[1]) {
		for (int i = 2; i <= 10; i++) {
			cin >> c >> l[i];
			l[i] += l[i - 1];
		}
		cin >> c >> v1 >> c >> v2;
		for (int i = 1; i <= 10; i++) {
			if (v2 * l[i - 1] <= v1 * (l[10] - l[i - 1]) && v2 * l[i] >= v1 * (l[10] - l[i])) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}