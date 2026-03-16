#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

string a(string s,string t,string u) {
	string::size_type pos = s.find(t);
	while (pos != string::npos) {
		s.replace(pos, t.size(), u);
		pos = s.find(t, pos + u.size());
	}
	return s;
}

int main() {
	string s;
	getline(cin, s);
	s = a(s, "apple", "PEACH");
	s = a(s, "peach", "apple");
	s = a(s, "PEACH", "peach");
	cout << s << endl;
	return 0;
}