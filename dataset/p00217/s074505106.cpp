#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n, maxp,num, d1, d2, max = -10000;
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> num >> d1 >> d2;
			if (d1 + d2 > max) {
				max = d1 + d2;
				maxp = num;
			}
		}
		cout << maxp<<" "<<max<<endl;
		max = -10000;
	}

return 0;
}