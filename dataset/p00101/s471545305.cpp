#include<iostream>
#include<iomanip>
#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

//#define int long long
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()
#define dump(o) {cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

//?????????s???????????????f?????¨???t??????????????? 
string replaceAll(string s, string f, string t) {
	string::size_type pos = s.find(f);
	while (pos != string::npos) {
		s.replace(pos, f.size(), t);
		pos = s.find(f, pos + t.size());
	}
	return s;
}

signed main() {
	int n; cin >> n; cin.ignore();
	rep(i, 0, n) {
		string s; getline(cin, s);
		cout << replaceAll(s, "Hoshino", "Hoshina") << endl;
	}
	return 0;
}