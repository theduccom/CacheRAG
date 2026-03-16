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
# include <bitset>
# include <complex>
# include <numeric>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);

int main() {
	string s;
	while (getline(cin, s)) {
		bool update = true;
		while (update) {
			for (int i = 0; i < s.size(); i++) {
				if (s.substr(i, 3) == "the") {
					cout << s << endl;
					update = false;
					break;
				}
				if (s.substr(i, 4) == "this") {
					cout << s << endl;
					update = false;
					break;
				}
				if (s.substr(i, 4) == "that") {
					cout << s << endl;
					update = false;
					break;
				}
			}
			for (int i = 0; i < s.size(); i++) {
				if (!('a' <= s[i] && s[i] <= 'z')) {
					continue;
				}
				if (s[i] == 'z')s[i] = 'a';
				else s[i] = char(s[i] + 1);
			}
			//cout << s << endl;
		}
	}
}