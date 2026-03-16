#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0257

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int i = (a << 2) + (b << 1) + c;
	if (i == 1 || i == 6) cout << "Open";
	else cout << "Close";
	cout << endl;
	return 0;
}