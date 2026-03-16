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
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

std::vector<int> prime;
void MakePrime(int n) {
	prime.emplace_back(2);
	for (int i = 3; i < n; i += 2) {
		bool a = false;
		for (int j = 3; j <= std::sqrt(i); j += 2) {
			if (i%j == 0) {
				a = true;
			}
		}
		if (a == false) {
			prime.emplace_back(i);
		}
	}
}
int main() {
	MakePrime(10000);
	bool p[10001] = { false };
	for (int i = 0; i < prime.size(); i++) {
		p[prime[i]] = true;
	}
	int n;
	while (cin >> n&&n != 0) {
		for (int i = n; i >= 0; i--) {
			if (p[i] && p[i - 2]) {
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}
}