#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		int a[10] = {};
		for(int i = 0; i < n; i++) {
			int b; cin >> b;
			a[b]++;
		}
		for(int i = 0; i < 10; i++) {
			if(a[i]) {
				for(int j = 0; j < a[i]; j++)
					cout << "*";
				cout << endl;
			}
			else
				cout << "-" << endl;
		}
	}
}