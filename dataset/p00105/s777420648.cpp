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
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;

vector< PS > vs;
string s;
ll n;

int main(){
	while (cin >> s >> n){
		vs.push_back(PS(s, n));
	}
	sort(ALL(vs));
	s = "";
	REP(i, vs.size()){
		if (s != vs[i].first){
			cout << vs[i].first << endl;
			s = vs[i].first;
		}
		if (i == vs.size() - 1){
			cout << vs[i].second << endl;
			continue;
		}
		if (vs[i + 1].first != s){
			cout << vs[i].second << endl;
		}
		else{
			cout << vs[i].second << " ";
		}
	}
}