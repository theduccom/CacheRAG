#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define pb push_back

const int N = 13;
int l[N];

int main() {
	ios :: sync_with_stdio(0);

	while(cin >> l[1]) {
		char c;
		for(int i = 2; i <= 10; i ++)
			cin >> c >> l[i];
		int v1, v2; cin >> c >> v1 >> c >> v2;
		partial_sum(l, l + 11, l);
		for(int i = 1; i <= 10; i ++)
			if(l[i - 1] * (v1 + v2) < l[10] * v1 && l[10] * v1 <= l[i] * (v1 + v2))
				cout << i << '\n';
	}

	return 0;
}