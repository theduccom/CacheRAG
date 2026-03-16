#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int stoi(const string& s) {
	int res;
	istringstream is(s);
	is >> res;
	return res;
}

string s;

int factor(int, int);
int term(int, int);
int formula(int, int);

int factor(int l, int r) {
	if(s[l] == '(')
		return formula(l + 1, r - 1);

	return stoi(s.substr(l, r - l));
}

int term(int l, int r) {
	int cnt = 0;
	for(int i = r - 1; i >= l; --i) {
		if(s[i] == ')')
			++cnt;

		else if(s[i] == '(')
			--cnt;

		else if(!cnt) {
			if(s[i] == '*')
				return term(l, i) * factor(i + 1, r);

			else if(s[i] == '/')
				return term(l, i) / factor(i + 1, r);
		}
	}

	return factor(l, r);
}

int formula(int l, int r) {
	int cnt = 0;
	for(int i = r - 1; i >= l; --i) {
		if(s[i] == ')')
			++cnt;

		else if(s[i] == '(')
			--cnt;

		else if(!cnt) {
			if(s[i] == '+')
				return formula(l, i) + term(i + 1, r);

			else if(s[i] == '-')
				return formula(l, i) - term(i + 1, r);
		}
	}

	return term(l, r);
}

int main() {
	cin.tie(false);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		cin >> s;
		cout << formula(0, s.size() - 1) << endl;
	}

	return EXIT_SUCCESS;
}