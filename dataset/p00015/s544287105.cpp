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
typedef pair<string, ll> PS;
typedef vector<ll> V;

int k = 0, n;
string s, t, u;
vector<string> ans;

int main(){
	cin >> n;
	REP(j, n){
		cin >> s >> t;
		k = 0;
		if (s.size() > 80 || t.size() > 80){
			cout << "overflow" << endl;
			continue;
		}
		reverse(ALL(s));
		reverse(ALL(t));
		while (s.size() != t.size()){
			if (s.size() > t.size()) t += "0";
			else s += "0";
		}
		reverse(ALL(s));
		reverse(ALL(t));
		REP(i, s.size()){
			int x = (s[s.size() - 1 - i] - '0') + (t[s.size() - 1 - i] - '0');
			string q;
			stringstream ss;
			if (i != s.size() - 1){
				ss << ((x + k) % 10);
			}
			else{
				ss << x + k;
			}
			ss >> q;
			ans.push_back(q);
			if (x + k >= 10){
				k = (x + k) / 10;
			}
			else{
				k = 0;
			}
		}
		reverse(ALL(ans));
		REP(i, ans.size()){
			u += ans[i];
		}
		if (u.size() > 80)cout << "overflow" << endl;
		else cout << u << endl;
		u = "";
		ans.clear();
	}
}

//int a[110], b[110], ans[110];
//string s, t;
//int n;
//
//int main(){
//	cin >> n;
//	while (n--){
//		cin >> s >> t;
//		if (s.size() > 80 || t.size() > 80){
//			cout << "overflow\n";
//			continue;
//		}
//		REP(i, s.size())a[i] = s[s.size() - 1 - i] - '0';
//		REP(i, t.size())b[i] = t[t.size() - 1 - i] - '0';
//		ll k = 0;
//		REP(i, 101){
//			ans[i] = (a[i] + b[i] + k) % 10;
//			k = (a[i] + b[i] + k) / 10;
//		}
//		if (ans[80] != 0){
//			cout << "overflow\n";
//			continue;
//		}
//		for (int i = max(s.size(), t.size()); i >= 0; i--){
//			if (i == max(s.size(), t.size())){
//				if (ans[i] != 0){
//					cout << ans[i];
//				}
//			}
//			else{
//				cout << ans[i];
//			}
//		}
//		cout << endl;
//		REP(i, 101){
//			ans[i] = 0;
//			a[i] = 0;
//			b[i] = 0;
//		}
//	}
//}