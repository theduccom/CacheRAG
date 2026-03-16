#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int Min(int a, int b, int c) {
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;

	return min;
}

int main() {
	int x, y, z;
	int n;

	while(1) {
		cin >> x >> y >> z;
		if(x == 0 && y == 0 && z == 0) {
			break;
		}
		double min = Min((x * x + y * y), (y * y + z * z), (z * z + x * x));  

		cin >> n;
		while(n--) {
			int r;
			cin >> r;
			r = 4 * r * r;
			
			cout << (min < r ? "OK" : "NA") << endl;
		}
	}
	return 0;
}