#include <iostream>
#include <vector>
using namespace std;

bool prime[1000001];
vector<int> p;

int main(){
	for(int i = 2;i <= 1000000;i++) prime[i] = true;
	for(int i = 4;i <= 1000000;i += 2) prime[i] = false;
	for(int i = 3;i <= 1000;i += 2){
		for(int j = 2 * i;j <= 1000000;j += i) prime[j] = false;
	}
	for(int i = 0;i <= 1000000;i++) if(prime[i]) p.push_back(i);
	
	int n,x;
	while(1){
		cin >> n >> x;
		if(!n) break;
		bool dp[1000001] = {true};
		for(int i = 0;i < n;i++){
			int v;
			cin >> v;
			for(int j = v;j <= x;j++){
				if(dp[j - v]) dp[j] = true;
			}
		}
		int i;
		for(i = x;i >= 0;i--){
			if(prime[i] && dp[i]) {
				cout << i << endl;
				break;
			}
		}
		if(i == -1) cout << "NA" << endl;
	}
	return 0;
}