#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	int x; string s;
	map <string, int> mp;
	while(cin >> x >> s)
		mp[s.substr(1)] ++;
	cout << mp["A"] << '\n';
	cout << mp["B"] << '\n';
	cout << mp["AB"] << '\n';
	cout << mp["O"] << '\n';

	return 0;
}