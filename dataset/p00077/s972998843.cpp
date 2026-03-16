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
	string s;

	while (cin >> s) {
		for (int i = 0; i < (int)s.size(); i++) {
			if (s[i] == '@') {
				int num = s[i + 1] - '0';
				char c = s[i + 2];
				cout << string(num, c);
				i += 2;
			} else {
				cout << s[i];
			}
		}

		cout << endl;
	}

	return 0;
}