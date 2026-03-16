#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
typedef pair<int,int> P;

int main(){
	int W,N,cou=0;
	int tr[1001],we[1001];
	while(cin >> W , W){
		cou++;
		cin >> N;
		for(int i=0;i<N;i++){
			scanf("%d,%d",&tr[i],&we[i]);
		}

		int dp[1010];
		for(int i=0;i<=W;i++){
			dp[i]= 0;
		}
		for(int i=0;i<N;i++){
			for(int j=W;j>=we[i];j--){
				dp[j] = max(dp[j],dp[j-we[i]]+tr[i]);
			}
		}
		int ret = 0;
		for(int i=0;i<=W;i++){
			if(dp[i] > dp[ret]) ret = i;
		}
		cout << "Case " << cou << ":" << endl;
		cout << dp[ret] << endl;
		cout << ret << endl;
	}
}