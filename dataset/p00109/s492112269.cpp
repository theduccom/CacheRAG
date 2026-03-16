#include <iostream>

using namespace std;

int cal(string&);
int expression(string&, int&);
int kou(string&, int&);
int num(string&, int&);

int cal(string& s) {
	int pos = 0;
	return expression(s, pos);
}
int expression(string& s, int& pos) {
	int left = kou(s, pos);
	while (1) {
		char op = s[pos++];
		if (op == '+') {
			int right = kou(s, pos);
			left += right;
		}
		else if (op == '-') {
			int right = kou(s, pos);
			left -= right;
		}
		else if (op == '=') {
			return left;
		}
		else if (op == ')') {
			return left;
		}
	}
}
int kou(string& s, int& pos) {
	int left = num(s, pos);
	while (1) {
		char op = s[pos++];
		if (op == '*') {
			left *= num(s, pos);
		}
		else if (op == '/') {
			left /= num(s, pos);
		}
		else {
			--pos;
			return left;
		}
	}
}
int num(string& s, int& pos) {
	int ret = 0;
	if (s[pos] == '(') {
		++pos;
		return expression(s, pos);
	}
	else {
		while ('0' <= s[pos] && s[pos] <= '9') {
			ret *= 10;
			ret += s[pos] - '0';
			++pos;
		}
	}
	return ret;
}


int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		cout << cal(s) << endl;
	}
}