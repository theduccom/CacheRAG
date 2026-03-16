#include <iostream>
#include <cctype>

/** memo
 * expr ::= term { ( '+' | '-' ) term }
 * term ::= fact { ( '*' | '/' ) fact }
 * fact ::= '(' expr ')' | digit
 **/

using namespace std;

int expr();
int term();
int fact();

char buf[101];
int p;

int expr() {
	int v = term();
	while(buf[p] == '+' || buf[p] == '-') {
		if(buf[p] == '+') {
			p++;
			v += term();
		}
		else {
			p++;
			v -= term();
		}
	}
	return v;
}


int term() {
	int v = fact();
	while(buf[p] == '*' || buf[p] == '/') {
		if(buf[p] == '*') {
			p++;
			v *= fact();
		}
		else {
			p++;
			v /= fact();
		}
	}
	return v;
}

int fact() {
	int v = 0;
	if(buf[p] == '(') {
		p++;
		v = expr();
		p++; // skip ')'
	}
	else {
		while(isdigit(buf[p])) {
			v = v * 10 + buf[p] - '0';
			p++;
		}
	}
	return v;
}

int main() {
	int times;
	int ans;

	cin >> times;
	for(int i = 0; i < times; i++) {
		cin >> buf;
		p = 0;
		ans = expr();
		cout << ans << endl;
	}

	return 0;
}