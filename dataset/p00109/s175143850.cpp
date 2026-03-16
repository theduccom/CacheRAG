#include<iostream>
#include <string>
using namespace std;

int weak(string& s, int& i);
int strong(string& s, int& i);
int fc(string& s, int& i);
int inte(string& s, int& i);

int weak(string& s, int& i) {
	int buf = strong(s, i);
	while (s[i] == '+' || s[i] == '-') {
		if (s[i] == '+') {
			i++;
			buf += strong(s, i);
		}
		else {
			i++;
			buf -= strong(s, i);
		}
	}
	return buf;
}

int strong(string& s, int& i) {
	int buf = fc(s, i);
	while (s[i] == '*' || s[i] == '/') {
		if (s[i] == '*') {
			i++;
			buf *= fc(s, i);
		}
		else {
			i++;
			buf /= fc(s, i);
		}
	}
	return buf;
}

int fc(string& s, int& i) {
	if ('0' <= s[i] && '9' >= s[i])return inte(s, i);
	else {
		i++;
		int re = weak(s, i);
		i++;
		return re;
	}
}

int inte(string& s, int& i) {
	int buf = s[i] - '0';
	i++;
	while ('0' <= s[i] && '9' >= s[i]) {
		buf = buf * 10 + s[i] - '0';
		i++;
	}
	return buf;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s; int j = 0;
		cin >> s;
		cout << weak(s, j) << endl;
	}
}