#include <bits/stdc++.h>
using namespace std;

int main()
{
	char ch;
	int re = 0, ro = 0;
	int a, b, c;
	while (cin >> a >> ch >> b >> ch >> c) {
		if (a * a + b * b == c * c) {
			re++;
		}
		if (a == b) {
			ro++;
		}
	}
	cout << re << endl;
	cout << ro << endl;
	return 0;
}