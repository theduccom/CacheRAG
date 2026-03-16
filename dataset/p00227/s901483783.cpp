#include<iostream>
using namespace std;
int main() {
	int a, b, date[11111],date2[11111],dai,kk,ans;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			goto a;
		}
		ans = 0;
		for (int i = 1; i <= a; i++) {
			cin >> date[i];
			ans += date[i];
		}
		for (int i = 1; i <= a; i++) {
			dai = 0;
			for (int z = 1; z <= a; z++) {
				if (dai <= date[z]) {
					dai = date[z];
					kk = z;
				}
			}
			date[kk] = 0;
			date2[i] = dai;
		}
		int ok = 0;
		while(ok<= a-b) {
			ok = ok + b;
			ans -= date2[ok];
		}
		cout << ans << endl;
	}
a:;
}
