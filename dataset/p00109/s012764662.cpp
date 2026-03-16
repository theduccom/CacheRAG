#include <bits/stdc++.h>

using namespace std;

using State = string::const_iterator;
             
int expression(State& s);

int number(State& s)
{
	int res = 0;
	while (isdigit(*s)) {
		res *= 10;
		res += *s - '0';
		s++;
	}
	return res;
}

int factor(State& s)
{
	if (*s == '(') {
		s++;
		int res = expression(s);
		s++;
		return res;
	} else {
		return number(s);
	}
}

int term(State& s)
{
	int res = factor(s);
	while (true) {
		if (*s == '*') {
			s++;
			res *= factor(s);
		} else if (*s == '/') {
			s++;
			res /= factor(s);
		} else {
			break;
		}
	}
	return res;
}

int expression(State& s)
{
	int res = term(s);
	while (true) {
		if (*s == '+') {
			s++;
			res += term(s);
		} else if (*s == '-') {
			s++;
			res -= term(s);
		} else {
			break;
		}
	}
	return res;
}

int main()
{
    int q;
    cin >> q;
    while (q--) {
        string st;
        cin >> st;
		State s = st.begin();
        cout << expression(s) << endl;
    }
}
