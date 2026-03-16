#include <iostream>
using namespace std;

int main () {
	double min, max,x;
	cin >> min;
	max = min;
	while(cin >> x) {
		if(min > x) {
			min = x;
		}
		if(max < x) {
			max = x;
		}
	}
	cout << max - min << endl;
	return 0;
}