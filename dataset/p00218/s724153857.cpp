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
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int n;
double a, b, c;
char ans;

int main(){
	while (cin >> n&&n){
		REP(i, n){
			cin >> a >> b >> c;
			if (a == 100 || b == 100 || c == 100 ||
				(a + b) / 2 >= 90 || (a + b + c) / 3 >= 80){
				ans = 'A';
			}
			else if ((a + b + c) / 3 >= 70 
				|| ((a >= 80 || b >= 80) && (a + b + c) / 3 >= 50)){
				ans = 'B';
			}
			else ans = 'C';
			cout << ans << endl;
		}
	}
}