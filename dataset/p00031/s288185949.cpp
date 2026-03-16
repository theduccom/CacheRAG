# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
using namespace std;
using LL = long long;
constexpr long long MOD = 1000000000 + 7;
constexpr long long INF = 1000000000;
const double PI = acos(-1);

int main() {
	int n;
	while (cin >> n) {
		bool a[1100] = {};
		int maxl = 0;
		for (int i = 512; i >= 1; i /= 2) {
			if (n >= i) {
				n -= i;
				a[i] = true;
				maxl = max(maxl, i);
			}
		}
		for (int i = 1; i <= 512; i *= 2) {
			if (a[i]) {
				if (i == maxl) {
					cout << i << endl;
				}
				else {
					cout << i << " ";
				}
			}
		}
	}
}