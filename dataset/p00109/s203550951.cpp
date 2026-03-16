#include <iostream>
#include <string>

using namespace std;

string s;

int stoi(string str) {
	int len = (int)str.size();
	if (len==0) return 0;
	return (str[len - 1] - '0') + 10 * ( stoi(str.substr(0, len - 1)) );
}

int parse(int l, int r) {
	int k = 0;
	
	// +, -
	for (int i=r-1; i>=l; i--) {
		if (s[i]=='(') k++;
		if (s[i]==')') k--;
		if (k==0 && s[i]=='+') return parse(l, i) + parse(i+1, r);
		if (k==0 && s[i]=='-') return parse(l, i) - parse(i+1, r);
	}
	
	// *,/
	for (int i=r-1; i>=l; i--) {
		if (s[i]=='(') k++;
		if (s[i]==')') k--;
		if (k==0 && s[i]=='*') return parse(l, i) * parse(i+1, r);
		if (k==0 && s[i]=='/') return parse(l, i) / parse(i+1, r);
	}
	
	if (s[l] == '(' && s[r-1] == ')') return parse(l+1, r-1);
	
	return stoi(s.substr(l, r-l));
}

int main() {
	int n; cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> s;
		cout << parse(0, (int)s.size()-1) << endl;
	}
	
	return 0;
}