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

bool check(string s) {
	int N = s.size();

	for (int i = 0; i < N / 2; i++) {
		if (s[i] != s[N - i - 1]) {
			return false;
		}
	}

	return true;
}

int main(void) {
	int cnt = 0;
	string s;
	while (getline(cin, s)) {
		if (check(s)) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}