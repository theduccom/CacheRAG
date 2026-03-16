#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;

bool cp(P a, P b) {
	return a.second > b.second;
}

int main() {
	int n;

	while (cin >> n, n) {
		vector<P> v;
		for (int i = 0; i < n; ++i) {
			int p, d1, d2; cin >> p >> d1 >> d2;
			v.push_back( P(p, d1+d2) );
		}
		sort( v.begin(), v.end(), cp );
		cout << v[0].first << " " << v[0].second << endl;
	}
}