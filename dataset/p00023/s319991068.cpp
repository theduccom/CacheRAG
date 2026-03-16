#include <iostream>
#include <cmath>
using namespace std;
#define rep2(i,from,to) for(int i=(from); i<(to); ++(i))
#define rep(i,to) rep2(i,0,to)
int main() {
	int n;
	cin >> n;
	while(n--) {
		double x[2], y[2], r[2];
		double EPS = 1e-10;
		cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
		if(pow(x[1] - x[0], 2.0) + pow(y[1] - y[0], 2.0) - pow(r[1] + r[0], 2.0) > EPS) {
			cout << "0" << endl;
		} else {
			if(r[1] - r[0] - sqrt(pow(x[1] - x[0], 2.0) + pow(y[1] - y[0], 2.0)) > EPS) {
				cout << "-2" << endl;
			} else if(r[0] - r[1] - sqrt(pow(x[1] - x[0], 2.0) + pow(y[1] - y[0], 2.0)) > EPS) {
				cout << "2" << endl;
			} else cout << "1" << endl;
		}
	}
	return 0;
}