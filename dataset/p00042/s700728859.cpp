//Solution for aoj:0042 A Thief
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
using namespace std;
int w, n, c;
char a;
int trs[1001][2];
int dp[1001][1001];
int main(){
	while (cin >> w){
		if (!w)
			return 0;
		c++;
		cin >> n;
		for (int i = 1; i <= n; i++){
			cin >> trs[i][0] >> a >> trs[i][1];
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= w; j++){
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				if (j >= trs[i][1])
					dp[i][j] = max(dp[i][j], dp[i - 1][j - trs[i][1]] + trs[i][0]);
			}
		}
		for (int i = 1; i <= w; i++){
			if (dp[n][i] == dp[n][w]){
				cout << "Case " << c << ':' << endl << dp[n][i] << endl << i << endl;
				break;
			}
		}
	}
}