#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
using namespace std;

#define PI 3.14159265358979

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int n,x;
int d[31];
const int MAX_C = 1000001;
bool primes[MAX_C];
bool dp[MAX_C];

void eratosthenes() {
	fill(primes, primes+MAX_C, true);
	primes[0] = primes[1] = false;
	repa(i,2,MAX_C-1) {
		if(primes[i]) {
			int j = i<<1;
			while(j < MAX_C) {
				primes[j] = false;
				j += i;
			}
		}
	}
}

void solve() {
	memset(dp, 0, sizeof(dp));
	dp[0] = true;
	repa(i,1,x) {
		if(!dp[i]) {
			rep(j,n) {
				if(i-d[j] >= 0 && dp[i-d[j]]) {
					dp[i] = true;
					break;
				}
			}
		}
	}

	repd(i,x,0) {
		if(dp[i] && primes[i]) {
			cout << i << endl;
			return;
		}
	}
	cout << "NA" << endl;
}

int main() {
	eratosthenes();
	while(cin>>n>>x, n|x) {
		rep(i,n) cin>>d[i];
		solve();
	}
}