#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v;
	while(cin >> v) {
		double y = v*v / 19.6;
		double N = (y+5.0) / 5.0;
		cout << ceil(N) << endl;
	}
	return 0;
}