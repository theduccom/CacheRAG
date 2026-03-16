#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define X first
#define Y second

const LL MOD = 1000000007;
int ans = INT_MAX / 2;
bool flag = true;
string ck = "01234567";
vector< string > his;

int dd[4] = {1, -1, 4, -4};

int main(void) {
	map<string, int> memo;
	memo[string("01234567")] = 0;

	queue<pair<string, int>> q;
	q.push(make_pair(string("01234567"), 0));

	while (q.size()) {
		auto p = q.front();
		q.pop();
		string tiles = p.first;
		int cnt = p.second;
		int pos = tiles.find('0');

		for (int i = 0; i < 4; i++) {
			int target = pos + dd[i];
			if (target < 0 || 7 < target) {
				continue;
			}
			if (min(pos, target) == 3 && max(pos, target) == 4) {
				continue;
			}

			string next_tiles(tiles);
			swap(next_tiles[pos], next_tiles[target]);

			if (!memo.count(next_tiles)) {
				memo[next_tiles] = cnt + 1;
				q.push(make_pair(next_tiles, cnt + 1));
			}
		}
	}

	string str(8, '0');

	while (cin >> str[0]) {
		for (int i = 1; i < 8; i++) {
			cin >> str[i];
		}
		
		cout << memo[str] << endl;
	}

	return 0;
}