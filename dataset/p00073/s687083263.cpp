#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int p, q; double s;
int main() {
	while (1) {
		cin >> p >> q; s = 0;
		if (!p) { break; }
		s += p*p;
		s += 2.0 * p * sqrt(q*q + (double)(p*p) / 4);
		cout << fixed << setprecision(15) << s << endl;
	}
}