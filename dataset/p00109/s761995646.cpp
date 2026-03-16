#include <iostream>
#include <string>
#include <cctype>

using namespace std;

typedef string::const_iterator Iter;

int express(Iter &p);
int term(Iter &p);
int factor(Iter &p);
int number(Iter &p);

int express(Iter &p) {
	int r = term(p);
	for(;;) {
		if(*p == '+') {
			p++;
			int rs = term(p);
			r += rs;
		}
		else if(*p == '-') {
			p++;
			int rs = term(p);
			r -= rs;
		}
		else
			break;
	}
	return r;
}


int term(Iter &p) {
	int r = factor(p);
	for(;;) {
		if(*p == '*') {
			p++;
			int rs = factor(p);
			r *= rs;
		}
		else if(*p == '/') {
			p++;
			int rs = factor(p);
			r /= rs;
		}
		else
			break;
	}
	return r;
}

int factor(Iter &p) {
	if(*p == '(') {
		p++;
		int r = express(p);
		p++; // skip )
		return r;
	}
	else
		return number(p);
}

int number(Iter &p) {
	int r = 0;
	while(isdigit(*p)) {
		r *= 10;
		r += (*p) - '0';
		p++;
	}
	return r;
}

int main() {
	int N; cin >> N;
	cin.ignore();
	while(N--) {
		string line;
		getline(cin, line);
		Iter begin = line.begin();
		int ans = express(begin);
		cout << ans << endl;
	}
}