#include <iostream>
#include <sstream>

using namespace std;

int pos;
string str;

int str_to_int(string str) {
	if (str == "") return 0;

	int ret = 0;

	stringstream ss;
	ss << str;
	ss >> ret;

	return ret;
}

int keisan();
int kou();
int number();

int keisan() {
	int left = kou();

	while (str[pos] != '=' && str[pos] != ')') {
		char c = str[pos++];
		int right = kou();

		if (c == '+') left += right;
		else left -= right;
	}
	++pos;

	return left;
}
int kou() {
	int left = number();

	while (str[pos] == '*' || str[pos] == '/') {
		char c = str[pos++];
		int right = number();

		if (c == '*') left *= right;
		else left /= right;
	}

	return left;
}
int number() {
	string ret = "";

	if (str[pos] == '(') {
		++pos;
		return keisan();
	}
	while (str[pos] >= '0' && str[pos] <= '9')
		ret += str[pos++];

	return str_to_int(ret);
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> str;

		pos = 0;

		cout << keisan() << endl;
	}
}