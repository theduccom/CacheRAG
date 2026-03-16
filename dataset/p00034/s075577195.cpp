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
#include<queue>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()
#define DUMP(o) {cerr<<#o<<" "<<o<<endl;}
#define DUMPC(o) {cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int MOD = 1e9 + 7;

signed main() {
	while (true) {
		vector<int> l(10);
		int v1, v2;
		if (!(cin >> l[0]))break;
		char c;
		FOR(i, 1, 10)cin >> c >> l[i];
		cin >> c >> v1 >> c >> v2;
		int sum = accumulate(ALL(l), 0);
		double a = (double)sum*v1 / (v1 + v2);
		int temp = 0;
		FOR(i, 0, 10) {
			temp += l[i];
			if (temp >= a) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}