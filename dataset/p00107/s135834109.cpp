#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int d[3];
	while (cin >> d[0] >> d[1] >> d[2], d[0], d[1], d[2]) {
		int n;
		cin >> n;
		sort(d, d + 3);
		long double c = sqrt(d[0] * d[0] + (d[1] * d[1]));
		for (int i = 0;i < n;i++) {
			int a;
			cin >> a;
			if (a*2 > c)cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	return 0;
}