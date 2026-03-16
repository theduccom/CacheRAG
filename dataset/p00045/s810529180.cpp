#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	int a, b, n = 0; char c;
	int sum = 0, cnt = 0;
	while(cin >> a >> c >> b) {
		sum += a * b;
		cnt += b;
		n ++;
	}
	cout << sum << '\n';
	cout << int(round(db(cnt) / n)) << '\n';

	return 0;
}