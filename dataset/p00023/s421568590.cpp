#include <iostream>
#include <cmath>
#define absolute(x) x > 0 ? x : -x
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		int result;
		double d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		if (d+rb < ra) result = 2;
		else if (d+ra < rb) result = -2;
		else if (d <= ra+rb) result = 1;
		else result = 0;
		cout << result << endl;
	}
	return 0;
}