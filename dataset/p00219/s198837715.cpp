#include <iostream>

using namespace std;

int main() {

	int n, j, x[10];

	while(cin >> n) {
		if(n==0)
			break;
		for(int i=0; i<10; i++) {
			x[i]=0;
		}
		for(int i=0; i<n; i++) {
			cin >> j;
			x[j]++;
		}
		for(int i=0; i<10; i++) {
			if(x[i]!=0) {
				while(x[i]>0) {
					cout << "*";
					x[i]--;
				}
			}
			else
				cout << "-";
			cout << endl;
		}
	}

	return 0;

}