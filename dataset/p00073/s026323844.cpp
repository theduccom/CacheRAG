#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double x, h, ans;
	while (cin >> x >> h) {
		if (x == 0 && h == 0) { break; }
		x *= 10000;
		h *= 10000;
		ans = pow(x, 2) + 2 * x * sqrt(pow(h,2)+pow(x/2,2));
		cout << fixed << setprecision(6) << ans / 100000000 << endl;
	}
	return 0;
}