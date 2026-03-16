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

ll a[10];
string s;

int main(){
	while (cin >> s){
		if (s.find("AB") != -1){
			a[2]++;
			continue;
		}
		if (s.find("A") != -1){
			a[0]++;
		}
		else if (s.find("B") != -1){
			a[1]++;
		}
		else{
			a[3]++;
		}
	}
	REP(i, 4){
		cout << a[i] << endl;
	}
}