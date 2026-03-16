#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {

	int c[3];

	while(cin >> c[0] >> c[1] >> c[2]) {
		if(!c[0]&&!c[1]&&!c[2]) {
			break;
		}
		sort(c, c+3);
		double R=sqrt(pow((double)c[0], 2)+pow((double)c[1], 2));

		int n;
		cin >> n;
		while(n) {
			int r;
			cin >> r;
			cout << (2*r>R ? "OK" : "NA") << endl;
			n--;
		}
	}

	return 0;

}