#include <iostream>
using namespace std;
int main () {
	int n;
	const int pre = 4280;
	while (cin >> n, n != -1) {
		int lv4 = max(0, n - 30);
		int lv3 = min(10, max(0, n - 20));
		int lv2 = min(10, max(0, n - 10));
		int sum = 1150 + lv2 * 125 + lv3 * 140 + lv4 * 160;
		cout << pre - sum << endl;
	}
	return 0;
}