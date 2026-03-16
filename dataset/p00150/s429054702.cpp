#include <iostream>
#include <vector>

using namespace std;

vector<int> furui(10001, 0);

int main () {
	furui[0] = furui[1] = 1;
	for (int i = 2; i*i <= 10001; i++) {
		if (furui[i] == 0) {
			for (int j = 2; j <= 10000/i; j++) {
				furui[i*j] = 1;
			}
		}
	}
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		for (int i = n; i > 0; i--) {
			if (furui[i] == 0 && furui[i-2] == 0) {
				cout << i-2 << " " << i << endl;
				break;
			}
		}
	}
	return 0;
}