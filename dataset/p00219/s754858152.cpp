#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int n, a;
	for (int h = 0; h < 20; h++) {
		cin >> n;
		int test[11] = { 0 };
		if (n == 0) {
			cin >> n; return 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> a;
			test[a]++;
		}
		for (int i = 0; i < 10; i++) {
			if (test[i] == 0) {
				cout << '-' << endl;
			}
			else {
				for (int j = 0; j < test[i]; j++) {
					cout << '*';
				}
				cout << endl;
			}
		}
	}
	cin >> n;
}
