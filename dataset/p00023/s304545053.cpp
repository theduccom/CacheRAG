#include<iostream>
#include<cmath>
using namespace std;
typedef long double LD;

int main() {
	int n;
	cin >> n;
	for (int x = 0;x < n;x++) {
		LD a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		LD od = ((d - a)*(d - a)) + ((e - b)*(e - b));
		LD rw = (c + f)*(c + f);
		LD id = (c - f)*(c - f);

	 if (rw <od)cout << 0 << endl;
		else if(od<id) {
			if (c < f)cout << -2 << endl;
			else cout << 2 << endl;
		}
		else cout << 1 << endl;
	}
	return 0;
}