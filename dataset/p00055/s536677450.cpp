#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

db a[11];

int main() {
	cout << fixed << setprecision(9);
	ios :: sync_with_stdio(0);

	while(cin >> a[1]) {
		for(int i = 2; i <= 10; i ++)
			if(i & 1)
				a[i] = a[i - 1] / 3;
			else
				a[i] = a[i - 1] * 2;
		cout << accumulate(a + 1, a + 11, 0.0) << '\n';
	}

	return 0;
}