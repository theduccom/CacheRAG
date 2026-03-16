#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define SIZE(x) ((int)(x).size())
#define UQ(v) v.erase(unique(v,begin(),v,end()),v.end());
#define INF 11922960 
#define pb push_back 
int dxy4[5] = { 0,1,0,-1,0 };
int dxy8[9] = { 0,1,1,0,-1,1,-1,-1,0 };
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)




//vector< vector<int> > v (max1, vector<int>(max2) );
int main() {
	int n, W, count = 0;
	while (1) {
		count++;
		cin >> W >> n;
		if (!W) break;
		vector<vector<int>>dp(n+1, vector<int>(W+1, 0));
		vector<int> v(n + 1, 0);
		vector<int> w(n + 1, 0);


		 char s;
		rep(i, n) { cin >> v[i+1]>> s>>w[i+1]; }

		rep(i, (n+1)) {
			if (!i)continue;
			//cout << i << "-------" << endl;
			rep(j, W-w[i]+1) {
				dp[i][j] = max(dp[i - 1][j],dp[i][j]);
				dp[i][w[i] + j] = max(dp[i - 1][w[i] + j], dp[i - 1][j] + v[i]);
				//cout << dp[i][w[i]+j] << " ";
			}
			//cout << endl;
		}
		int umax = dp[n][W];
		rep(i, W + 1) {
			if (dp[n][i] == umax) {
				cout << "Case " << count <<":"<< endl<< umax << endl << i << endl;
				break;
			}
		}
	}
	return 0;
}
