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

char r[] = "apple",m[]="peach";
bool f = 0;
string s, t, ans = "";

int main(){
	getline(cin, s);
	stringstream ss;
	ss << s;
	while (ss >> t){
		if (t.find("apple") != -1){
			int pos = t.find("apple");
			for (int i = pos; i <  pos+ 5; i++){
				t[i] = m[i - pos];
			}
		}
		else if (t.find("peach") != -1){
			int pos = t.find("peach");
			for (int i = pos; i < pos + 5; i++){
				t[i] = r[i - pos];
			}
		}
		if (f == 0){
			ans += t;
		}
		else{
			ans += " " + t;
		}
		f = 1;
	}
	cout << ans << endl;
}