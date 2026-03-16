#include <bits/stdc++.h>

using namespace std;

string allReplaceString(string s, string f, string t) {
	string r;
	for (int p=0; (p = s.find(f)) != s.npos;) {
		r += s.substr(0, p) + t;
		s = s.substr(p + f.size());
	}
	return r + s;
}

int main() {
	string line;
	int n;
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, line);
		string ans = allReplaceString(line, "Hoshino", "Hoshina");
		cout << ans << endl;
	}
	
	return 0;
}