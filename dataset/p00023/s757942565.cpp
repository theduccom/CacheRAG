#include <iostream>
using namespace std;

int main() {
	int n;
	double x_a, y_a, r_a, x_b, y_b, r_b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x_a >> y_a >> r_a >> x_b >> y_b >> r_b;
		double distance2 = (x_a - x_b)*(x_a - x_b) + (y_a - y_b)*(y_a - y_b);

		if (distance2 > (r_a + r_b)*(r_a + r_b)) {
			cout << 0 << endl;
		} else if (distance2 >= (r_a - r_b)* (r_a - r_b)){
			cout << 1 << endl;
		} else if(r_a > r_b){
			cout << 2 << endl;
		} else {
			cout << -2 << endl;
		}
	}


	return 0;
}