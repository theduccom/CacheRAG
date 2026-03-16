#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int n;
int prime[50001];
V v;
ll ans[50001];

int main(){
	fill(prime, prime + 50000, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i <= 50000; i++){
		if (prime[i] == 1){
			for (int j = 2 * i; j <= 50000; j += i){
				prime[j] = 0;
			}
		}
	}
	for (int i = 0; i < 50000; i++){
		if (prime[i] == 1)v.push_back(i);
	}
	REP(i, v.size()){
		FOR(j, i, v.size()){
			if (v[i] + v[j] > 50000)continue;
			ans[v[i] + v[j]]++;
		}
	}
	while (cin >> n&&n){
		cout << ans[n] << endl;
	}
}