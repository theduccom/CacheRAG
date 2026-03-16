#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001], N, W, w[1001], v[1001];

void solve(){
	for(int i=N-1;i>=0;i--){
		for(int j=0;j<=W;j++){
			if(j<w[i]) dp[i][j] = dp[i+1][j];
			else dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
		}
	}
}

int main(){
	int q = 1, ans;
	string in;
	while(1){
		cin >> W;
		if(!W) break;
		cin >> N;
		for(int i=0;i<=N;i++){
			w[i]=0;
			v[i]=0;
			for(int j=0;j<=W;j++){
				dp[i][j] = 0;
			}
		}
		for(int i=0;i<N;i++){
			cin >> in;
			int flag=0;
			for(int j=0;j<in.size();j++){
				if(in[j]==',') flag++;
				else if(flag==1) w[i] = w[i]*10 + (in[j] - '0');
				else v[i] = v[i]*10 + (in[j] - '0');
			}
			//cout << w[i] << " " << v[i] << endl;
		}
		solve();
		for(int j=0;j<=W;j++){
			if(dp[0][j]==dp[0][W]){
				//cout << "hoge:" << j << endl;
				ans = j;
				break;
			}
		}
		cout << "Case " << q << ":" << endl;
		cout << dp[0][W] << endl << ans << endl;
		q++;
	}
}