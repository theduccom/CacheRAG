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

ll n;
ll prime[10010];
bool is_prime[1001000];

//n??\???????´???°????????????
void sieve(int n){
	int p = 0;
	for (int i = 0; i <= n; i++)is_prime[i] = 1;
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i <= n; i++){
		if (is_prime[i]){
			prime[p++] = i;
			for (int j = 2 * i; j <= n; j += i)is_prime[j] = 0;
		}
	}
}

int main(){
	sieve(105000);
	while (cin >> n&&n){
		ll sum = 0;
		for (int i = 0; i < n; i++){
			sum += prime[i];
		}
		cout << sum << endl;
	}
}