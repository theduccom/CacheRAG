#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;

int expr(string &s, int &i);
int term(string &s, int &i);
int factor(string &s, int&i);
int num(string&s, int&i);

int expr(string&s, int&i) {
	int val = term(s, i);
	while(s[i] == '+' || s[i] == '-') {
		char op = s[i];
		++i;
		int val2 = term(s, i);
		if (op == '+') {
			val+=val2;
		}
		else {
			val-=val2;
		}
	}
	return val;
}

int term(string &s, int&i) {
	int val = factor(s, i);
	while (s[i] == '/' || s[i] == '*') {
		char op = s[i];
		++i;
		int val2 = factor(s, i);
		if (op == '/') {
			val /= val2;
		}
		else {
			val *= val2;
		}
	}
	return val;
}

int factor(string &s, int&i) {
	if (isdigit(s[i])) return num(s, i);
	else {
		++i;
		int val= expr(s, i);
		++i;
		return val;
	}
}
int num(string &s, int&i) {
	int a;
	if (isdigit(s[i])) {
		a = s[i] - '0';
		++i;
		while (isdigit(s[i])) {
			a = a * 10 + (s[i] - '0');
			++i;
		}
	}
	return a;
}
int main() {
	int n;
	cin >> n;
	REP(i, n) {
		string s;
		cin >> s;
		s = s.substr(0, s.size() - 1);
		int index = 0;
		int ans = expr(s, index);
		cout << ans << endl;
	}
	return 0;
}