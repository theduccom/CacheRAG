#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int W, N, casenum = 0, ans, wmin;
int v[1000], w[1000];
int dp[1001][1001];

int rec_dp(int, int);
void solve();

int main(){
	int i;
	char c;
		
	while(1){
		cin >> W >> N;
		if(W == 0)
			break;
		
		casenum++;
		for(i = 0; i < N; i++)
			cin >> v[i] >> c >> w[i];
		
		memset(dp, -1, sizeof(dp));
		ans = rec_dp(0, W);
		
		for(i = 0; i <= W; i++){
			if(rec_dp(0, i) == ans){
				wmin = i;
				break;
			}
		}
		
		solve();
	}
	
	return 0;
}

int rec_dp(int i, int j){
	if(dp[i][j] != -1)
		return dp[i][j];
	
	int res;
	
	if(i == N)
		res = 0;
	else if(j < w[i])
		res = rec_dp(i + 1, j);
	else
		res = max(rec_dp(i + 1, j), rec_dp(i + 1, j - w[i]) + v[i]);
	
	return dp[i][j] = res;
}

void solve(){
	cout << "Case" << " " << casenum << ":" << endl;
	cout << ans << endl;
	cout << wmin << endl;
}