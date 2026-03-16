#include <iostream>
#include <cmath>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0216

int calc(int w) {
	int sum = 1150;
	if (w < 10) return sum;
	sum += min(w - 10, 10) * 125;
	if (w < 20) return sum;
	sum += min(w - 20, 10) * 140;
	if (w < 30) return sum;
	sum += (w - 30) * 160;
	return sum;
}

int main() {
	int w;
	while (cin >> w) {
		if (w == -1) break;
		cout << (4280 - calc(w)) << endl;
	}
	return 0;
}