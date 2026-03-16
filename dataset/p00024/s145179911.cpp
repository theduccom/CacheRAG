#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double d;
	while(cin >> d) {
		cout << (int) ceil((4.9 * pow(d / 9.8, 2.0) + 5.0) / 5.0) << endl;
	}
	return 0;
}