#include <iostream>
#include <string>
#include <cctype>

using namespace std;

typedef string::const_iterator State;

struct Parsing {
	int expression(State& it) {
		int res = term(it);
		while (true) {
			if (*it == '+') res += term(++it);
			else if (*it == '-') res -= term(++it);
			else break;
		}
		return res;
	}

	int factor(State& it) {
		int res = 0;
		if (*it == '(') {
			res = expression(++it);
			++it;
		} else res = number(it);
		return res;
	}

	int term(State& it) {
		int res = factor(it);
		while (true) {
			if (*it == '*') res *= factor(++it);
			else if (*it == '/') res /= factor(++it);
			else break;
		}
		return res;
	}

	int number(State& it) {
		int res = 0;
		while (isdigit(*it)) {
			res *= 10;
			res += *it - '0';
			++it;
		}
		return res;
	}
};

int main() {
	int n; cin >> n;
	Parsing solve;
	while (n--) {
		string s; cin >> s;
		State begin = s.begin();
		cout << solve.expression(begin) << endl;
	}

	return 0;
}
