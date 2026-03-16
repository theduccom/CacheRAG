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

string replace_all(string s, string before, string after) {
	for (int i = 0; i + before.size() <= s.size(); i++) {
		if (s.substr(i, before.size()) == before) {
			s.replace(i, before.size(), after);
		}
	}

	return s;
}

int main(void) {
	int N;
	cin >> N;
	cin.get();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		cout << replace_all(s, "Hoshino", "Hoshina") << endl;
	}

	return 0;
}