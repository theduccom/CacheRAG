#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int cur;
string s;

int digit();
int number();
int factor();
int term();
int expression();

int digit() {
	return ( s[cur++] - '0' );
}

int number() {
	int n = digit();
	while ( isdigit( s[cur] ) )
		n = n * 10 + digit();
	return n;
}

int factor() {
	int n;
	if ( s[cur] == '(' ) {
		cur++;
		n = expression();
		cur++;
	} else
		n = number();
	return n;
}

int term() {
	int n = factor();
	while ( s[cur] == '*' || s[cur] == '/' ) {
		cur++;
		if ( s[cur - 1] == '*' )
			n *= factor();
		else
			n /= factor();
	}
	return n;
}

int expression() {
	int n = term();
	while ( s[cur] == '+' || s[cur] == '-' ) {
		cur++;
		if ( s[cur - 1] == '+' )
			n += term();
		else
			n -= term();
	}
	return n;
}

int main() {
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cur = 0;
		cin >> s;
		int m = expression();
		cout << m << endl;
	}
}