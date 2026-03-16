#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int T;
const int MAXT = 30;
int X;
const int MAXX = 1000000;
vector<bool> Prime(MAXX+1, true);

int main(void) {
	// calc prime
	int sq_n = (int)(sqrt((double)MAXX) + 0.9);
	Prime[0] = false;
	Prime[1] = false;
	for (int i = 2; i < sq_n; i++) {
		if (Prime[i]) {
			for (int j = i + i; j < MAXX; j += i) {
				Prime[j] = false;
			}
		}
	}

	while (cin >> T >> X, T || X) {
		// input and init
		vector<int> price(T);
		vector<bool> dp(X+1, false);
		for (int i = 0; i < T; i++) {
			cin >> price[i];
			dp[price[i]] = true;
		}

		// dp
		for (int i = 0; i <= X; i++){
			if (!dp[i]){
				continue;
			}
			for (int j = 0; j < T; j++) {
				int x = i + price[j];
				if (x <= X) {
					dp[x] = true;
				}
			}
		}

		int res = 0;
		for (int i = X; i >= 0; i-- ){
			if (dp[i] && Prime[i]){
				res = i;
				break;
			}
		}

		// output
		if (res){
			cout << res << endl;
		}else {
			cout << "NA" << endl;
		}
	}

	return 0;
}