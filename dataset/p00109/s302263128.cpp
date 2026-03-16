#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

typedef string::const_iterator state;
class parse_error {};

//Debug
//state it_begin, it_end;

void compare(state &it, char expected) {
	if (*it != expected) {
		cerr << "Expected '" << expected << "',";
		cerr << "got '" << *it << "'";

		//Debug
		//cerr << " rest \"";
		//while (it < it_end) {
		//	cerr << *it++;
		//}
		//cerr << "\"";

		cout << endl;
		throw parse_error();
	}
}

/*

EBNF

expression	= {['+'|'-'] term} | '=';
term		= factor {('*'|'/') factor};
factor		= '(' expression ')' | integer;
integer		= digit {digit};
digit		= '0'|'1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9';

*/

int expression(state &it);
int term(state &it);
int factor(state &it);
int integer(state &it);

int expression(state &it) {
	if (*it == '=')return 0;

	int ret = term(it);

	while (true) {
		if (*it == '+') {
			it++;
			ret += term(it);
		}
		else if (*it == '-') {
			it++;
			ret -= term(it);
		}
		else {
			break;
		}
	}

	return ret;
}

int term(state &it) {
	int ret = factor(it);

	while (true) {
		if (*it == '*') {
			it++;
			ret *= factor(it);
		}
		else if (*it == '/') {
			it++;
			ret /= factor(it);
		}
		else {
			break;
		}
	}
	return ret;
}

int factor(state &it) {
	if (*it == '(') {
		it++;
		int ret = expression(it);
		compare(it, ')');
		it++;
		return ret;
	}
	else {
		return integer(it);
	}
}

int integer(state &it) {
	int ret = 0;

	while (isdigit(*it)) {
		ret *= 10;
		ret += *it - '0';
		it++;
	}

	return ret;
}

int main() {
	int N; cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);

		state it = s.begin();

		//Debug
		//it_begin = s.begin();
		//it_end = s.end();

		int ans = expression(it);
		compare(it, '=');
		cout << ans << endl;
	}
	return 0;
}