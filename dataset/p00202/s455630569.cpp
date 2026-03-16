#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	bool prime[1000001];
	prime[1] = true;
	for(int i = 2; i * i <= 1000000; i++){
		if(!prime[i]){
			for(int j = i * i; j <= 1000000; j += i){
				prime[j] = true;
			}
		}
	}
	int n,w;
	while(cin >> n >> w){
		if(n == 0 && w == 0) break;
		bool dp[1000001] = {0};
		int data[31];
		for(int i = 0; i < n; i++){
			cin >> data[i];
		}
		dp[0] = true;
		for(int i = 0; i < n; i++){
			for(int j = data[i]; j <= w; j++){
				if(dp[j - data[i]]){
					dp[j] = true;
				}
			}
		}
		int ans = -1;
		for(int i = w; i >= 2; i--){
			if(!prime[i] && dp[i]){
				ans = i;
				break;
			}
		}
		if(ans == -1)puts("NA");
		else printf("%d\n",ans);
	}
	return 0;
}