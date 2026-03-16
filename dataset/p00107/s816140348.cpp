#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int cheese[3];
	while (cin >> cheese[0] >> cheese[1] >> cheese[2]) {
		if (cheese[0] == 0 && cheese[1] == 0 && cheese[2] == 0) {
			break;
		}
		sort(cheese,cheese + 3);
		int min_diagonal = cheese[0]*cheese[0] + cheese[1]*cheese[1];
		int n;
		cin >> n;
		while (n--) {
			int r;
			cin >> r;
			cout << (min_diagonal < 4*r*r ? "OK" : "NA") << endl;
		}
	}
}