#include <iostream>

using namespace std;

#define INF 1 << 10

int f(int n, int low, int up) {
	return n < low ? 0 : n > up ? up - low : n - low;
}

int main() {
	int w;
	while (cin >> w, w != -1) {
		int price =
			  1150
			+ f(w, 10, 20) * 125
			+ f(w, 20, 30) * 140
			+ f(w, 30, INF) * 160
			;
		cout << (4280 - price) << endl;
	}
}