#include <iostream>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int, int> P;

int main()
{
	int W,N,csn = 1;
	char ch;
	while(cin >> W,W){
		cin >> N;
		vector< P > takara(N + 1);
		vector< vector< int > > dp(N + 1, vector< int >(W + 1,0));
		for(int i = 1;i <= N;i++){
			cin >> takara[i].first >> ch >> takara[i].second;
		}
		for(int i = 1;i <= N;i++){
			for(int j = 1;j <= W;j++){
				if ((j - takara[i].second >= 0) && (dp[i - 1][j - takara[i].second] + takara[i].first > dp[i - 1][j])) {
					dp[i][j] = dp[i - 1][j - takara[i].second] + takara[i].first;
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		int n = W;
		while (dp[N][n] == dp[N][W])
			n--;
		cout << "Case " << csn << ":" << endl;
		cout << dp[N][W] << endl;
		cout << n + 1 << endl;
		csn++;
	}
	return 0;
}