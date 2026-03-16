#include <iostream>
#include <string>
using namespace std;

int atoi(string s);
int calc(string in);

int main() {
	int n; cin >> n;
	for (int lop = 0; lop<n; lop++) {
		string in; cin >> in;
		cout << calc(in.substr(0, in.size() - 1)) << endl;
	}
}

int calc(string in) {
	//cout<<in<<endl;
	bool f = true;
	for (int i = 1; i<in.size(); i++) {
		if (in[i]<'0' || '9'<in[i]) {
			f = false;
			break;
		}
	}
	if (f) {
		if (in[0] == '-')
			return -atoi(in.substr(1, in.size() - 1));
		if (in[0] == '+')
			return atoi(in.substr(1, in.size() - 1));
		return atoi(in);
	}
	for (int i = 0; i<in.size(); i++) {
		if (in[i] == '+' || in[i] == '-' || in[i] == '(' || in[i] == ')') {
			f = true;
			break;
		}
	}
	if (!f) {
		int num = 1, start = 0;
		// if op * , else /
		bool op = true;
		for (int i = 0; i<in.size(); i++) {
			if (in[i] == '*' || in[i] == '/') {
				if (op)
					num *= atoi(in.substr(start, i - start));
				else
					num /= atoi(in.substr(start, i - start));
				start = i + 1;
				if (in[i] == '*')
					op = true;
				else
					op = false;
			}
			if (i == in.size() - 1) {
				if (op)
					num *= atoi(in.substr(start, 1 + i - start));
				else
					num /= atoi(in.substr(start, 1 + i - start));
				break;
			}
		}
		return num;
	}
	for (int i = 0; i<in.size(); i++) {
		if (in[i] == '(' || in[i] == ')') {
			f = false;
			break;
		}
	}
	if (f) {
		int start = 0, num = 0;
		// if op + , else - 
		bool op = true;
		for (int i = 0; i<in.size(); i++) {
			if (in[i] == '+' || in[i] == '-') {
				if (op)
					num += calc(in.substr(start, i - start));
				else
					num -= calc(in.substr(start, i - start));
				start = i + 1;
				if (in[i] == '+')
					op = true;
				else
					op = false;
			}
			if (i == in.size() - 1) {
				if (op)
					num += calc(in.substr(start, 1 + i - start));
				else
					num -= calc(in.substr(start, 1 + i - start));
				break;
			}
		}
		return num;
	}
	int level = 1;
	//cout<<in<<endl;
	if (in[0] != '(' || in[in.size() - 1] != ')')
		f = true;
	if (!f) {
		for (int i = 1; i < in.size() - 1; i++) {
			if (in[i] == '(')
				level++;
			if (in[i] == ')')
				level--;
			if (level == 0) {
				f = true;
				break;
			}
		}
		if (!f)
			return calc(in.substr(1, in.size() - 2));
	}
	level = 0;
	for (int i = 0; i<in.size(); i++) {
		if (in[i] == '(') {
			level++;
			continue;
		}
		if (in[i] == ')') {
			level--;
			continue;
		}
		if (level == 0 && (in[i] == '+' || in[i] == '-'))
			f = false;
	}
	if (f) {
		//cout<<in<<endl;
		level = 0;
		int start = 0;
		int num = 1;
		bool op = true;
		for (int i = 0; i<in.size(); i++) {
			if (i == in.size() - 1) {
				if (op)
					num *= calc(in.substr(start, 1 + i - start));
				else
					num /= calc(in.substr(start, 1 + i - start));
			}
			if (in[i] == '(') {
				level++;
				continue;
			}
			if (in[i] == ')') {
				level--;
				continue;
			}
			if (level == 0 && (in[i] == '*' || in[i] == '/')) {
				if (op)
					num *= calc(in.substr(start, i - start));
				else
					num /= calc(in.substr(start, i - start));
				start = i + 1;
				if (in[i] == '*')
					op = true;
				else
					op = false;
			}
		}
		return num;
	}
	int start = 0, num = 0;
	level = 0;
	bool op = true;
	for (int i = 0; i<in.size(); i++) {
		if (i == in.size() - 1) {
			if (op)
				num += calc(in.substr(start, 1 + i - start));
			else
				num -= calc(in.substr(start, 1 + i - start));
		}
		if (in[i] == '(') {
			level++;
			continue;
		}
		if (in[i] == ')') {
			level--;
			continue;
		}
		if (level == 0 && (in[i] == '+' || in[i] == '-')) {
			if (op)
				num += calc(in.substr(start, i - start));
			else
				num -= calc(in.substr(start, i - start));
			start = i + 1;
			if (in[i] == '+')
				op = true;
			else
				op = false;
		}
	}
	return num;
}

int atoi(string s) {
	int n = 0;
	for (int i = 0; i<s.size(); i++) {
		n = n * 10 + s[i] - '0';
	}
	return n;
}
