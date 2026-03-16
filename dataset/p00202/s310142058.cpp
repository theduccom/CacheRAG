#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) string((s).rbegin(), (s).rend())
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long int ll;
typedef pair<int, int> P;


bool isPrime[1000001];

void setPrime(){
	fill(isPrime, isPrime+1000001, true);
	for(int i = 4; i < 1000001; i+=2){
		isPrime[i] = false;
	}
	isPrime[0] = isPrime[1] = 0;
	for(int i = 3; i < 1000001; i+=2){
		if(isPrime[i] == true){
			for(int j = i*2; j < 1000001; j+=i){
				isPrime[j] = false;
			}
		}
	}
}

int dp[1000001];

int solve(vector<int> menu, int x){
	fill(dp, dp+1000001, -1);
	dp[0] = 0;

	int best = 0;
	for(int i = 0; i < menu.size(); i++){
		for(int j = 0; j+menu[i] <= x; j++){
			if(dp[j] != -1){
				dp[j+menu[i]] = true;
				if(isPrime[j+menu[i]]){
					best = max(best, j+menu[i]);
				}
			}
		}
	}

	return best;
}

int main(){
	setPrime();

	while(1){
		int n, x;
		cin >> n >> x;
		if(!n && !x) break;
		vector<int> menu(n);
		rep(i, n){
			cin >> menu[i];
		}

		int cost = solve(menu, x);
		if(cost){
			cout << cost << endl;
		}else{
			cout << "NA" << endl;
		}
	}

	return 0;
}