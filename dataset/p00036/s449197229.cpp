#include <iostream>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <sstream>
#include <istream>
#include <cmath>
#include <cstdio>

using namespace std;

#define vci vector<int>
#define vcs vector<string>
#define pb push_back
#define sz size()
#define mapii map<int, int>
#define mapci map<char, int>
#define mapsi map<string, int>
#define all(x) x.begin(), x.end()
#define minit(a, i) memset(a, i, sizeof(a));

#define for_(i, a, b) for (int i=(int)a; i<(int)b; i++)
#define for_d(i, a, b) for (int i=(int)a-1; i>=b; i--)
#define for_r(i, a, b, c) for (int i=(int)a; i<(int)b; i += c)
#define for_dr(i, a, b, c) for (int i=(int)a-1; i>=b; i -= c)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

typedef long long ll;

const int iINF = 2147483647;
const ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }



int MAX = 8;

int main() {
	vector< vcs > b(7);
	b[0].pb("11"); b[0].pb("11");
	b[1].pb("1"); b[1].pb("1"); b[1].pb("1"); b[1].pb("1");
	b[2].pb("1111");
	b[3].pb("01"); b[3].pb("11"); b[3].pb("10");
	b[4].pb("110"); b[4].pb("011");
	b[5].pb("10"); b[5].pb("11"); b[5].pb("01");
	b[6].pb("011"); b[6].pb("110");
	
	vcs m(MAX);
	string tes;
	
	while (cin >> tes) {
		if (tes=="") continue;
		
		m[0] = tes;
		for_(i, 1, MAX) cin >> m[i];
	
		for_(k, 0, 7) {
			vcs bl = b[k];
			int Y = (int)bl[0].sz, X = (int)bl.sz;
		
			bool flag = false;
			for_(i, 0, MAX-X+1) for_(j, 0, MAX-Y+1){
				bool f = true;
				for_(x, 0, X) for_(y, 0, Y) {
					if (m[i+x][j+y] != bl[x][y]) f = false;				
				}
				if (f) flag = true;
			}
		
			if (flag) {
				char ans = 'A' + k;
				cout << ans << endl;
				break;
			}
		}
	}
	
	return 0;
}