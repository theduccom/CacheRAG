#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <fstream>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;

string s;
int p;

int expression();
int term();
int factor();
int number();

int expression() {
	int value = term();
	while(true) {
		if(s[p] == '+') {
			p++;
			value += term();
		} else if(s[p] == '-') {
			p++;
			value -= term();
		} else {
			break;
		}
	}
	return value;
}

int term() {
	int value = factor();
	while(true) {
		if(s[p] == '*') {
			p++;
			value *= factor();
		} else if(s[p] == '/') {
			p++;
			value /= factor();
		} else {
			break;
		}
	}
	return value;
}

int factor() {
	int value = 0;
	if(s[p] == '(') {
		p++;
		value = expression();
		p++;
	} else {
		value = number();
	}
	return value;
}

int number() {
	int value = 0;
	while(isdigit(s[p])) {
		value = value*10 + (s[p] - '0');
		p++;
	}
	return value;
}

int main() {
	int n;
	cin >> n;
	REP(i, n) {
		p = 0;
		cin >> s;
		cout << expression() << endl;
	}

	return 0;
}