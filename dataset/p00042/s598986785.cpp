#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define INF (1<<21)
int dp[1001][1001];
pair<int,int> solve(vector<int> value , vector<int> weight , int W , int N){
	for(int i=0;i<1001;i++)
		for(int j=0;j<1001;j++)
			dp[i][j] = 0;
	for(int num=1;num<=N;num++){
		for(int w=0;w <= W;w++){
			dp[num][w] = max( dp[num][w] , dp[num-1][w]);
			if(w >= weight[num])dp[num][w] = max( dp[num][w] , dp[num-1][w-weight[num]] + value[num]);
		}
	}	
	int ans1 = *max_element(dp[N],dp[N]+W+1);
	int ans2 = find(dp[N],dp[N]+W+1,ans1)-dp[N];
	return make_pair(ans1,ans2);
}

int main(){
	int n,w,CaseNum=0;
	while(cin >> w && w){
		cout << "Case " << ++CaseNum << ":" << endl;
		cin >> n;
		vector<int> value(1+n) , weight(1+n);
		for(int i=1;i<=n;i++){
			scanf("%d,%d\n",&value[i],&weight[i]);
		}
		pair<int,int> ans = solve(value,weight,w,n);
		cout << ans.first << endl << ans.second << endl;
	}
}