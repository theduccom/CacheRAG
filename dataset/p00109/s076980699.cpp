#include <bits/stdc++.h>

typedef std::string::const_iterator State;
class ParseError {};

using namespace std;

int expression(State&);
int term(State&);
int number(State&);
int factor(State&);
void consume(State&);

// begin???expected?????????????????????begin?????????????????????
void consume(State &begin, char expected) {
    if (*begin == expected) {
        begin++;
    } else {
        cerr << "Expected '" << expected << "' but got '" << *begin << "'"
            << endl;
        cerr << "Rest string is '";
        while (*begin) {
            cerr << *begin++;
        }
        cerr << "'" << endl;
        throw ParseError();
    }
}

int expression(State &begin) {
	int ret = term(begin);
	//cout << "e:" << *begin << endl;
	while(1) {
		if(*begin == '+') {
			begin++;
			ret += term(begin);
		} else if(*begin == '-') {
			begin++;
			ret -= term(begin);
		} else {
			break;
		}
	}
	
	return ret;
}

int term(State &begin) {
	int ret = factor(begin);
	//cout << "t:" << *begin << endl;
	while(1) {
		if(*begin == '*') {
			begin++;
			ret *= factor(begin);
		} else if(*begin == '/') {
			begin++;
			ret /= factor(begin);
		} else {
			break;
		}
	}
	
	return ret;
}

int number(State &begin) {
	int ret = 0;
	//cout << "n:" << *begin << endl;
	while(isdigit(*begin)) {
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}
	
	return ret;
}

int factor(State &begin) {
	//cout << "f:" << *begin << endl;
	if(*begin == '(') {
		begin++;
		int ret = expression(begin);
		begin++;
	} else {
		return number(begin);
	}
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0; i<n; ++i) {
		string s;
		getline(cin, s);
		
		State begin = s.begin();
		int ans = expression(begin);
		consume(begin, '=');
		cout << ans << endl;
	}
	
	return 0;
}