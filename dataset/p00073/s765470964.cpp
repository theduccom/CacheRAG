#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define set fixed << setprecision(6)
#define square pow(x, 2)
#define triangle x * sqrt(pow(h, 2) + pow(x / 2, 2)) / 2

int main() {
	double x, h;
	while (1) {
		cin >> x >> h; if (x == 0 && h == 0) break;
		cout << set << square + 4 * triangle << endl;
	}
	return 0;
}
