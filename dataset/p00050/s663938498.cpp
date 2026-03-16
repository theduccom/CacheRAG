#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s; getline(cin, s);
	regex re("apple");
	s=regex_replace(s, re, "???");
	regex re2("peach");
	s=regex_replace(s, re2, "apple");
	regex re3("???");
	s=regex_replace(s, re3, "peach");
	cout << s << endl;
	return 0;
}