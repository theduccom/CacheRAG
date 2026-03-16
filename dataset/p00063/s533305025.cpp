#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	cout << fixed << setprecision(9);
	ios :: sync_with_stdio(0);

	int ans = 0;
	for(string s; cin >> s; )
		if(equal(s.begin(), s.end(), s.rbegin()))
			ans ++;
	cout << ans << '\n';

	return 0;
}