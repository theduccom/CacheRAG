#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 27;
const int MAX_N = 1001;
const int MAX_W = 1001;
// ???????????????
int v[MAX_N], a[MAX_N];
int dp[MAX_N][MAX_W];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int w, n;
	int cnt = 1;
	while(cin >> w && w != 0){
	cin >> n;
	
	for(int i = 0; i < n; ++i){
		char c;
		cin >> v[i] >> c >> a[i];
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j <= w; ++j){
			if(j < a[i])
				dp[i + 1][j] = dp[i][j];
			else
				dp[i + 1][j] = max(dp[i][j], dp[i][j - a[i]] + v[i]);
		}
	}
	
	int m = INF;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j <= w; ++j){
			if(dp[i + 1][j] == dp[n][w]){
				m = min(m, j);
			}
		}
	}
	
	cout << "Case " << cnt << ":" << endl;
	cout << dp[n][w] << endl;
	cout << m << endl;
	cnt++;
	}
}