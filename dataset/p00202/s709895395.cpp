#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;
const int MAX = 1000000;
bool prime[1000001];
bool dp[1000001];

void Init(){
	memset(dp, false, sizeof(dp));
	dp[0] = true;
}

void era(){
	prime[0] = prime[1] = false;
	for(int i = 2; i <= MAX; i++){
		if(prime[i]){
			for(int j = i*2; j <= MAX; j+=i) prime[j] = false;
		}
	}
}

int main(){
	int n, limit;
	memset(prime, true, sizeof(prime));
	era();
	while(cin >> n >> limit && ((n!=0)||(limit!=0))){
		Init();
		int maxc = 0;
		for(int i = 1; i <= n; i++){
			int tmp;
			cin >> tmp;
			dp[tmp] = true;
			for(int j = 0; j+tmp <= limit; j++){
				if(dp[j]){
					dp[j+tmp] = true;
					if(prime[j+tmp]&&maxc<j+tmp) maxc = j+tmp; 
				}
			}
		}
		if(!maxc) cout << "NA" << endl;
		else cout << maxc << endl;
	}
	return 0;
}