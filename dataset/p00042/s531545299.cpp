#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;

int main(){
	int caseNum = 1;
	while(true){
		int W, N;
		cin >> W;
		if(W == 0){ break; }
		cin >> N;
		vector<pii> items(N);
		for(int i = 0; i < N; ++i){
			char c;
			cin >> items[i].first >> c >> items[i].second;
		}
		vector<int> dp(W + 1, -1);
		dp[0] = 0;
		for(int i = 0; i < N; ++i){
			for(int j = W; j >= 0; --j){
				if(dp[j] < 0){ continue; }
				int weight = j + items[i].second;
				if(weight > W){ continue; }
				dp[weight] = max(dp[weight], dp[j] + items[i].first);
			}
		}
		int answer = 0;
		for(int i = 0; i <= W; ++i){
			if(dp[i] > dp[answer]){ answer = i; }
		}
		cout << "Case " << caseNum++ << ":" << endl;
		cout << dp[answer] << endl << answer << endl;
	}
	return 0;
}