#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

int expr(string& s, int& i);
int term(string& s, int& i);
int factor(string& s, int& i);
int number(string& s, int& i);

int expr(string& s, int& i) {
	int val = term(s, i);
	while (s[i] == '+' || s[i] == '-') {
		char op = s[i++];
		int val2 = term(s, i);
		if (op == '+') val += val2;
		else val -= val2;
	}
	return val;
}

int term(string& s, int& i) {
	int val = factor(s, i);
	while (s[i] == '*' || s[i] == '/') {
		char op = s[i++];
		int val2 = factor(s, i);
		if (op == '*') val *= val2;
		else val /= val2;
	}
	return val;
}

int factor(string& s, int& i) {
	if (isdigit(s[i])) return number(s, i);
	
	i++;
	int res = expr(s, i);
	i++;
	return res;
}

int number(string& s, int& i) {
	int num = s[i++] - '0';
	while (isdigit(s[i])) num = num*10 + s[i++] - '0';
	return num;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		str.erase(str.end() - 1);
		int i = 0;
		cout << expr(str, i) << endl;
	}
	return 0;
}