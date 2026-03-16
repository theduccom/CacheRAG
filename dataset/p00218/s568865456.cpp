#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		for(int i = 0; i < n; i++) {
			int pm,pe,pj;
			cin >> pm >> pe >> pj;
			if(pm == 100 || pe == 100 || pj == 100)
				cout << "A" << endl;
			else if(pm + pe >= 180)
				cout << "A" << endl;
			else if(pm + pe + pj >= 240)
				cout << "A" << endl;
			else if(pm + pe + pj >= 210)
				cout << "B" << endl;
			else if(pm + pe + pj >= 150 && (pm >= 80 || pe >= 80))
				cout << "B" << endl;
			else
				cout << "C" << endl;
		}
	}
}