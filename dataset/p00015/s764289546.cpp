#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int N, c, tmp;
	cin >> N;
	string ans;
	for (int i = 0; i < N; i++) {
		ans = "";
		c = 0;
		string a, b;
		cin >> a >> b;
		for (int j = 0; j < max(a.length(), b.length()); j++) {
			int A, B;
			A = a.length() - j - 1;
			B = b.length() - j - 1;
			tmp = (A >= 0 ? a[A] - '0' : 0) + (B >= 0 ? b[B] - '0' : 0) + c;
			ans = (char)(tmp % 10 + '0') + ans;
			c = tmp / 10;
		}
		if (c) {
			ans = '1' + ans;
		}
		cout << (ans.length() > 80 ? "overflow" : ans) << endl;
	}
	return 0;
}