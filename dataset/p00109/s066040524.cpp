
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <cctype>
using namespace std;

typedef string::const_iterator State;
int expression(State &begin);

typedef string::const_iterator State;
int expression(State &begin);

int number(State &begin) {
	int ret = 0;
	for (; isdigit(*begin);) {
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}
	return ret;
}
int factor(State &begin) {
	int ret;
	if (*begin == '(') {
		begin++;
		ret = expression(begin);
		begin++;
	}
	else {
		return number(begin);
	}
	return ret;
}
int term(State &begin) {
	int ret = factor(begin);
	for (;;) {
		if (*begin == '*') {
			begin++;
			ret *= factor(begin);
		}
		else if (*begin == '/') {
			begin++;
			ret /= factor(begin);
		}
		else break;
	}
	return ret;
}


int expression(State &begin) {
	int ret = term(begin);
	for (;;) {
		if (*begin == '+') {
			begin++;
			ret += term(begin);
		}
		else if (*begin == '-') {
			begin++;
			ret -= term(begin);
		}
		else break;
	}
	return ret;
}

int main() {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);
		State s = str.begin();
		cout << expression(s) << endl;
	}
	return 0;
}