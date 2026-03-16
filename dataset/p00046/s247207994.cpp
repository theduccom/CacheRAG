#include <iostream>
#include <limits>
using namespace std;

int main() {
	double max = 0;
	double min = numeric_limits<double>::max();
	double now;
	while (cin >> now) {
		if (max < now) {
			max = now;
		}
		if (min > now) {
			min = now;
		}
	}
	cout << max - min << endl;
	
	return 0;
}