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
# include <unordered_map>

using namespace std;
using LL = long long;

constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;

int main() {
	int a, b;
	bool c = false;
	while (cin >> a >> b&&(a||b)) {
		if (c)cout << endl;
		c = true;
		int count = 0;
		for (int i = a; i <= b; i++) {
			if (i % 4 == 0) {
				if (i % 100 != 0) {
					cout << i << endl;
					count++;
				}
				else {
					if (i % 400 == 0) {
						cout << i << endl;
						count++;
					}
				}
			}
		}
		if (count == 0) {
			cout << "NA" << endl;
		}
	}
}