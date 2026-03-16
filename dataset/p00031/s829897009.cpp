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
V vi;

int main(){
	while (cin >> n){
		for (int i = 9; i >= 0; i--){
			if (n >= pow(2, i)){
				n -= pow(2, i);
				vi.push_back(pow(2, i));
				if (n == 0)break;
			}
		}
		sort(ALL(vi));
		REP(i, vi.size()){
			cout << vi[i];
			if (i == vi.size() - 1)cout << endl;
			else cout << " ";
		}
		vi.clear();
	}
}