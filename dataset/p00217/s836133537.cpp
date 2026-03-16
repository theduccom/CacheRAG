#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int n, a, b, c, d = 0, sum = 0;
	for (int h = 0; h < 51; h++) {
		cin >> n;
		if (n == 0) {
			cin >> n; return 0;
		}
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			if (sum < b + c) {
				d = a; sum = b + c;
			}
		}
		cout << d << ' ' << sum << endl;
		d = 0; sum = 0;
	}
	cin >> n;
}
