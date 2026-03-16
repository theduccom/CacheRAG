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
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;

int main() {
	map<string, vector<int>> mp;
	string s;
	int a;
	while (cin >> s >> a) {
		mp[s].emplace_back(a);
	}
	sort(mp[s].begin(), mp[s].end());
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first<< endl;
		sort(mp[itr->first].begin(), mp[itr->first].end());
		for (int i = 0; i < mp[itr->first].size(); i++) {
			cout << mp[itr->first][i];
			if (i != mp[itr->first].size() - 1)cout << " ";
			else cout << endl;
		}
	}
}