#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	bool p[1000001];
	int n, x;

	p[0] = false;
	p[1] = false;
	for(int i = 2; i <= 1000000; i++) {
		p[i] = true;
	}

	for(int i = 2; i * i <= 1000000; i++) {
		for(int j = 2; j * i <= 1000000; j++) {
			p[i * j] = false;
		}
	}

	while( true ) {
		cin >> n >> x;

		if(n == 0 && x == 0) {
			break;
		}

		vector< bool > dp(x + 1, false);
		int money;
		dp[0] = true;

		for(int i = 0; i < n; i++) {
			cin >> money;
			for(int j = 0; j <= x - money; j++) {
				if( dp[j] ) {
					dp[j + money] = true;
				}
			}
		}


		int ans = 0;
		for(int i = x; i >= 0; --i) {
			if(p[i] && dp[i]) {
				cout << i << endl;
				break;
			} else if(i == 0) {
				cout << "NA" << endl;
			}
		}
	}
}