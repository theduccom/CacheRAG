#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	db x; vector <db> v;
	while(cin >> x) v.pb(x);
	cout << fixed << setprecision(3);
	cout << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());

	return 0;
}