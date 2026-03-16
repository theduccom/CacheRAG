#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
typedef pair<int,int> P;
typedef pair<P,int> status;

int main() {
	int W,N,cnt = 1;
	while(true){
		cin >> W;
		if(W==0) return 0;
		cin >> N;
		int val[1001],weight[1001];
		memset(val,0,sizeof(val));
		memset(weight,0,sizeof(weight));
		for(int i = 0;i<N;i++){
			cin >> val[i];
			cin.get();
			cin >> weight[i];
		}
		int dp[1003];
		memset(dp,0,sizeof(dp));
		for(int i = 0;i<N;i++){
			for(int j = W;j >= weight[i];j--){
				if(j-weight[i]<0)continue;
				dp[j] = max(dp[j],dp[j-weight[i]]+val[i]);
			}
		}
		int mini;
		for(int i = W;dp[i] == dp[W];i--) mini = i;
		cout << "Case " << cnt << ":" << endl;
		cout << dp[W] << endl;
		cout << mini << endl;
		cnt++;
	}
	return 0;
}