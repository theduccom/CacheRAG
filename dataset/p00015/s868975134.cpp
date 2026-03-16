#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>

using namespace std;


#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;


int main(){
	int n; cin >> n;
	while (n--) {
		string a, b; cin >> a >> b;
		reverse(all(a));
		reverse(all(b));
		if (a.size() < b.size() ) swap(a, b);
		int u = 0;
		string s;
		rep(i, b.size()) {
			int d = a[i] - '0' + b[i] - '0' + u;
			u = d / 10;
			s += d % 10 + '0';
		}
		REP(i, b.size(), a.size() - 1) {
			int d = a[i] - '0' + u;
			u = d / 10;
			s += d % 10 + '0';
		}
		if(u) s += '1';
		reverse(all(s));
		if(s.size() > 80) cout << "overflow" << endl;
		else cout << s << endl;
		
	}
	return 0;
}