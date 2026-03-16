#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define ERASE(v,i) (v).erase(remove(all(v),i),(v).end())
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define debug(x) cerr<<#x<<" = "<<(x)<<endl;
#define LINE cerr<<"LINE: "<<__LINE__<<endl;
inline int toInt(string s){int v;istringstream i(s);i>>v;return v;}
template<class T> inline string toString(T x){ostringstream o;o<<x;return o.str();}
template<class T> void pv(T a,T b){for(T it=a;it!=b;++it)cerr<<*it<<" ";cerr<<endl;}
const int INF = 1000000000;
const double EPS = 1e-10;

typedef string::const_iterator State;

int express(State& p);
int factor(State& p);
int term(State &p);
int number(State &p);

// 足し算
int express(State& p) {
	int r = term(p);
	
	for(;;) {
		if(*p == '+') {
			p++;
			int rs = term(p);
			r += rs;
		}
		else if(*p == '-') {
			p++;
			int rs = term(p);
			r -= rs;
		}
		else {
			break;
		}
	}
	
	return r;
}


// 掛け算
int term(State &p) {
	int r = factor(p);
	
	for(;;) {
		if(*p == '*') {
			p++;
			int rs = factor(p);
			r *= rs;
		}
		else if(*p == '/') {
			p++;
			int rs = factor(p);
			r /= rs;
		}
		else {
			break;
		}
	}
	
	return r;
}

// カッコ
int factor(State &p) {
	if(*p == '(') {
		p++;
		int ret = express(p);
		p++;
		return ret;
	}
	return number(p);
}

int number(State &p) {
	// if(*p == '(') return factor(p);
	int ret = 0;
	
	while(isdigit(*p)) {
		ret *= 10;
		ret += *p - '0';
		p++;
	}
	
	return ret;
}

int main() {
	int N; cin >> N;
	cin.ignore();
	while(N--) {
		string line;
		getline(cin, line);
		State p = line.begin();
		int ans = express(p);
		cout << ans << endl;
	}
	return 0;
}