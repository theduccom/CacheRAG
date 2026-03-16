#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	string s; getline(cin, s);
	for(int i = 0; i < s.size(); i ++) {
		if(s.substr(i, 5) == "apple") {
			for(char c : string("peach"))
				s[i ++] = c;
			i --;
		} else if(s.substr(i, 5) == "peach") {
			for(char c : string("apple"))
				s[i ++] = c;
			i --;
		}
	}
	cout << s << '\n';

	return 0;
}