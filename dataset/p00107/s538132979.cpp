#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define sqr(x) ((x)*(x))

int main() {
	int a, b, c;
	
	while(cin >> a >> b >> c, a || b || c) {
		int n;
		double m;
		cin >> n;

		m = min(sqrt(sqr(a)+sqr(b)),min(sqrt(sqr(b)+sqr(c)),sqrt(sqrt(c)+sqr(a))));

		for(int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			if(m < tmp * 2)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}

	return 0;
}