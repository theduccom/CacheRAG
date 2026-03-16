#include <iostream>
using namespace std;

int main() {
	int r1, r2, r;
	char c;
	int cnt[2] = {0, 0};
	while (cin >> r1 >> c >> r2 >> c >> r) {
		if (r1==r2) cnt[1]++;
		else if (r1*r1+r2*r2==r*r) cnt[0]++;
	}
	cout << cnt[0] << endl << cnt[1] << endl;
	return 0;
}