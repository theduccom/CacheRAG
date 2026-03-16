#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s;
	map<char, int>mp = {
		{ 'I',1 },
		{ 'V',5 },
		{ 'X',10 },
		{ 'L',50 },
		{ 'C',100 },
		{ 'D',500 },
		{ 'M',1000 }
	};
	while (cin >> s) {
		int cnt = 0;
		rep(i, s.size()) {
			if (i == s.size() - 1 || mp[s[i]] >= mp[s[i + 1]])cnt += mp[s[i]];
			else {
				cnt += mp[s[i + 1]] - mp[s[i]];
				i++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}