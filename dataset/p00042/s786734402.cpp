#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int dp[1001][1001];
pair<int,int> solve(vector<int> value , vector<int> weight,int W,int N){
	for(int i=0;i<1001;i++)for(int j=0;j<1001;j++)
		dp[i][j] = 0;

	for(int i=1 ; i <= N ; i++){
		for(int wei = 0 ; wei <= W ; wei++){
			if(wei < weight[i])dp[i][wei] = dp[i-1][wei];
			else dp[i][wei] = max(dp[i-1][wei] , dp[i-1][wei-weight[i]]+value[i]);
		}
	}
	int maxVal = dp[N][W];
	int minWei = find(dp[N],dp[N]+W+1,maxVal)-dp[N];
	return make_pair(maxVal,minWei);
}

int main(){
	int n,w,CaseNum=0;
	while(cin >> w && w){
		cout << "Case " << ++CaseNum << ":" << endl;
		cin >> n;
		vector<int> val(n+1),wei(n+1);
		for(int i=1;i<=n;i++)
			scanf("%d,%d\n",&val[i],&wei[i]);
		pair<int,int> ans = solve(val,wei,w,n);
		cout << ans.first << endl << ans.second << endl;
	}
}