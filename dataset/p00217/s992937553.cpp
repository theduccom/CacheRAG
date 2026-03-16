#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n) {
		int p[10000], d1[10000], d2[10000];
		int top[2] = {};
		for (int i = 0; i < n; i++) {
			cin >> p[i] >> d1[i] >> d2[i];
			if (top[1] < d1[i] + d2[i]) {
				top[0] = p[i];
				top[1] = d1[i] + d2[i];
			}
		}
		cout << top[0] <<" "<< top[1] << endl;
	}


	return 0;
}