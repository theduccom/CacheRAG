#include <bits/stdc++.h>

using namespace std;

typedef string::const_iterator State;
class ParseError {};

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int expression(State &begin);
int term(State &begin);
int number(State &begin);
int factor(State &begin);

int number(State &begin) {
	int ret = 0;

	while (isdigit(*begin)) {
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}
	return ret;
}

int term(State &begin) {
	int ret = factor(begin);

	for (;;) {
		if (*begin == '*') {
			begin++;
			ret *= factor(begin);
		} else if (*begin == '/') {
			begin++;
			ret /= factor(begin);
		} else {
			break;
		}
	}
	return ret;
}

int expression(State &begin) {
	int ret = term(begin);

	for (;;) {
		if (*begin == '+') {
			begin++;
			ret += term(begin);
		} else if (*begin == '-') {
			begin++;
			ret -= term(begin);
		} else {
			break;
		}
	}

	return ret;
}

int factor(State &begin) {
	if (*begin == '(') {
		begin++; // '('テ」ツつ津ゥツ」ツ崚」ツ?ーテ」ツ?凖」ツ??
		int ret = expression(begin);
		begin++; // ')'テ」ツつ津ゥツ」ツ崚」ツ?ーテ」ツ?凖」ツ??
		return ret;
	} else {
		return number(begin);
	}
}

int main(void) {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		State begin = s.begin();
		cout << expression(begin) << endl;
	}
	return 0;
}