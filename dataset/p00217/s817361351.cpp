#include <iostream>

using namespace std;

int main() {

	int n;

	while(cin >> n) {
		if(!n) {
			break;
		}
		int pp, max=0;
		for(int i=0; i<n; i++) {
			int p, d1, d2;
			cin >> p >> d1 >> d2;
			if(d1+d2>max) {
				max=d1+d2;
				pp=p;
			}
		}
		cout << pp << " " << max << endl;
	}

	return 0;

}