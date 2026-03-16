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





int main() {
	vci p, s;
	
	int p_, s_; char c;
	int sum = 0, avg = 0, n = 0;
	while (cin >> p_ >> c >> s_) {
		sum += p_*s_; avg += s_; n++;
	}
	
	cout << sum << endl;
	cout << (int)((double)avg/(double)n + 0.5) << endl;
	
	return 0;
}