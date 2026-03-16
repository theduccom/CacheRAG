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
	string a, b, c;
	cin >> a >> b >> c;
	a = a + b + c;
	if (a == "110" || a == "001")cout << "Open" << endl;
	else cout << "Close" << endl;
}