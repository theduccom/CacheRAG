#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v, y; int ans;
	while (cin >> v) {
		y = 4.9 * pow((v / 9.8), 2);
		ans = (int)((y + 5) / 5) + 1;
		cout << ans << endl;
	}
	return 0;
}
