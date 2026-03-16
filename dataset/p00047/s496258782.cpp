#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	char ans = 'A';
	for(char a, b; cin >> a >> b >> b; ) {
		if(a == ans)
			ans = b;
		else if(b == ans)
			ans = a;
	}
	cout << ans << '\n';

	return 0;
}