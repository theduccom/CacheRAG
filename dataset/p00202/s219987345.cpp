// AOJ 0202

#include <iostream>
#include <algorithm>

using namespace std;

const int limit = 1000500;

bool prime[limit];
void p(void)
{
	fill(prime, prime + limit, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < limit; i++){
		if (prime[i]){
			for (int j = i * 2; j < limit; j += i){
				prime[j] = false;
			}
		}
	}
	return;
}

int main(void)
{
	p();

	int n, x;
	while (cin >> n >> x, n || x){
		bool dp[limit]; fill(dp, dp + limit, false);
		int hanayo[35];

		for (int i = 0; i < n; i++){
			cin >> hanayo[i];
		}

		for (int i = 0; i < n; i++){
			int kotori = hanayo[i];
			dp[kotori] = true;
			// cout << kotori << " ***** " << endl;
			for (int j = 0; j < limit; j++){
				if (dp[j] && j + kotori <= x){
					// cout << j << " " << kotori << endl;
					dp[j + kotori] = true;
				}
			}
		}

		int ret = -1;
		for (int i = x; i >= 0; i--){
			if (prime[i] && dp[i]){
				ret = i;
				break;
			}
		}
		if (ret == -1){
			cout << "NA" << endl;
		}
		else {
			cout << ret << endl;
		}
	}

	return 0;
}