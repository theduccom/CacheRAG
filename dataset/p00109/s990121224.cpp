#include <iostream>
#include <string>

using namespace std;

string input;
int pos;

int fact();
int term();
int expr();

int fact() {
	int result = 0;
	if (input[pos] == '(') {
		pos++;
		result = expr();
		pos++;
	} else {
		while (isdigit(input[pos])) {
			result = result * 10 + input[pos] - '0';
			pos++;
		}
	}
//	cout << "fact: " << result << endl;
	return result;
}

int term() {
	int result = fact();
	while (input[pos] == '*' || input[pos] == '/') {
		if (input[pos] == '*') {
			pos++;
			result *= fact();
		} else {
			pos++;
			result /= fact();
		}
	}
//	cout << "term: " << result << endl;
	return result;
}

int expr() {
	int result = term();
	while (input[pos] == '+' || input[pos] == '-') {
		if (input[pos] == '+') {
			pos++;
			result += term();
		} else {
			pos++;
			result -= term();
		}
	}
//	cout << "expr: " << result << endl;
	return result;
}

int main() {
	int n; cin >> n;
	while (n--) {
		cin >> input;
		pos = 0;
		cout << expr() << endl;
	}
	return 0;
}