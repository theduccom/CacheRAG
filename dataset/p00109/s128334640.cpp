#include <bits/stdc++.h>
using namespace std;

int Num();
int Fact();
int Term();
int Exp();

int ite;
string s;

int Num() {
	int res = 0;
	while (isdigit(s[ite])) {
		res = res * 10 + s[ite] - '0';
		ite++;
	}
	return res;
}

int Fact() {
	if (s[ite] == '(') {
		ite++;
		int res = Exp();
		ite++;
		return res;
	}
	else {
		return Num();
	}
}

int Term() {
	int res = Fact();
	while (true) {
		if (s[ite] == '*') {
			ite++;
			res *= Fact();
		}
		else if (s[ite] == '/') {
			ite++;
			res /= Fact();
		}
		else {
			break;
		}
	}
	return res;
}

int Exp() {
	int res = Term();
	while (s[ite] != '=' && s[ite] != ')') {
		if (s[ite] == '+') {
			ite++;
			res += Term();
		}
		else if(s[ite] == '-') {
			ite++;
			res -= Term();
		}
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	while (n--) {
		cin >> s;
		ite = 0;
		cout << Exp() << endl;
	}
	return 0;
}