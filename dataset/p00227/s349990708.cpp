#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m, n || m) {
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			int p; cin >> p;
			v.push_back(p);
		}

		sort( v.begin(), v.end() );
		reverse( v.begin(), v.end() );

		int ans = 0, count = 0;
		for (int i = 0; i < n; ++i)
			if (++count >= m)
				count = 0;
			else
				ans += v[i];

		cout << ans << endl;
	}
}