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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll; 
typedef pair<ll, ll> PL;

ll n, ans = 0, o = 0, b = 0, k = 0;
string s;

int main(){
	cin >> n;
	while (cin >> s&&n){
		if (s == "HIT"){
			k++;
			if (k > 3){
				k--;
				ans++;
			}
		}
		else if (s == "HOMERUN"){
			ans += (k + 1);
			k = 0;
		}
		else{
			o++;
		}
		if (o == 3){
			cout << ans << endl;
			ans = 0;
			o = 0;
			k = 0;
			n--;
		}
	}
}