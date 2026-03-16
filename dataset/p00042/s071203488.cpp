#include <iostream>
#include <cstring>

using namespace std;

int N, W;

int v[1010], w[1010];

int dp[2][1010];

void solve() {
	memset(dp, 0, sizeof(dp));
	
	dp[0][0] = 0;
	for (int i = 0; i < N; i++) {
		int nw = i%2, nx = (i+1)%2;
		for (int j = 0; j <= W; j++) {
			dp[nx][j] = max( dp[nx][j], dp[nw][j] );
			if (j + w[i] <= W) dp[nx][ j + w[i] ] = max( dp[nw][ j + w[i] ], dp[nw][ j ] + v[i]);
		}
	}
	
	int ansv = 0, answ;
	for (int i=0; i<=W; i++) {
		if (ansv < dp[N%2][i]) {
			ansv = dp[N%2][i];
			answ = i;
		}
	}
	cout << ansv << endl;
	cout << answ << endl;
}

int main() {
	int cnum = 0;
	
	while (1) {
		cin >> W; if (W==0) break;
		cnum++;
		
		cin >> N;
		char c;
		for (int i=0; i<N; i++) cin >> v[i] >> c >> w[i];
		
		cout << "Case " << cnum << ":" << endl;
		
		solve();
	}
	
	return 0;
}