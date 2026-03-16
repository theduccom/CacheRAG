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

int main() {
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		sort(s.begin(),s.end());
		string ss = s;
		for (int i = 0; i < 4; i++) {
			swap(ss[i], ss[7 - i]);
		}
		cout << stoi(ss) - stoi(s) << endl;
	}
}