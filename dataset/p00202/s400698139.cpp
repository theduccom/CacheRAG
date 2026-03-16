#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef pair<int, pii> pip;
 
 
 
const int INF = 1000000;
const double EPS = 1e-8;
const int mod = 1e9 + 7;

int dp[1000010];
int p[40];

bool isPrime[1000010];
//vi primes;

int main(){
	fill(isPrime+2, isPrime+1000010, true);
	for(int i= 2; i < 1000010; i++){
		if(isPrime[i]){
			//primes.pb(i);
			for(int j = i+i; j < 1000010; j+=i){
				isPrime[j]=false;
			}
		}
	}

	int n, x;
	while(cin>>n>>x){
		if(n == 0 && x == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			cin>>p[i];
		}
		for(int i= 0; i <= x; i++){
			dp[i] = INF;
		}
		dp[0] = 0;
		for(int i = 0; i < n; i++){
			for(int j = p[i]; j <= x; j++){
				dp[j] = min(dp[j], dp[j-p[i]]+1);
			}
		}
		bool f = false;
		for(int i = x; i > 0; i--){
			if(dp[i]!=INF && isPrime[i]){
				cout<<i<<endl;
				f=true;
				break;
			}
		}
		if(!f){
			cout<<"NA"<<endl;
		}
	}
}