#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int n;
	
	while (cin >> n, n) {
		for_(i,0,n) {
			int pm, pe, pj;
			cin >> pm >> pe >> pj;
			
			double ave = (double)(pm + pe + pj) / 3.;
			double aveme = (double)(pm + pe) / 2.;
			
			if (aveme > 89 || pm == 100 || pe == 100 || pj == 100) {
				cout << "A" << endl;
			} else {
				
				if (ave < 50) {
					cout << "C" << endl;
				} else if (ave < 70) {
					if (pm >= 80 || pe >= 80) cout << "B" << endl;
					else cout << "C" << endl;
				} else if (ave < 80) {
					cout << "B" << endl;
				} else {
					cout << "A" << endl;
				}
			}
		}
	}
}