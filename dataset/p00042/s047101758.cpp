#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	const int nmax = 1000;
	char c;
	int count = 1;
	int dp[nmax+1];
	int n, w;
	int val[nmax+1], weight[nmax+1];
	while(cin >> w){
		if(w == 0) break;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> val[i] >> c >> weight[i];
		}
		for(int i = 0;i <= w; i++) dp[i] = 0;
		for(int i = 1; i <= n; i++){
			for(int j = w; j >= weight[i]; j--){
				dp[j] = max(dp[j],dp[j - weight[i]] + val[i]);
			}
		}
		cout << "Case " << count++ << ":" << endl;
		cout << dp[w] << endl;
		while(w > 0 && dp[w] == dp[w-1]) w--;
		cout << w << endl;
	}
	return 0;
}