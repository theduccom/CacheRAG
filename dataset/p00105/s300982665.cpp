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

int main(void) {
	map<string, set<int>> m;
	string name;
	int num;

	while (cin >> name >> num) {
		if (m.count(name)) {
			m[name].insert(num);
		} else {
			m[name] = set<int>();
			m[name].insert(num);
		}
	}

	for (auto &one : m) {
		cout << one.first << endl;
		for (auto &index : one.second) {
			cout << index << (index == *(one.second.rbegin()) ? '\n' : ' ');
		}
	}

	return 0;
}