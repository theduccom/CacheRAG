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

string nextConvert(string s) {
	transform(s.begin(), s.end(), s.begin(), [](char c)->char{
			if (islower(c)) return (c - 'a' + 1) % 26 + 'a';
			else 			return c;
		});
	return s;
}

bool check(string s) {
	vector<string> targets({"the", "this", "that"});

	for (auto &target : targets) {
		if (s.find(target) != string::npos) {
			return true;
		}
	}

	return false;
}

int main(void) {
	string s;

	while (getline(cin, s)) {
		for (int i = 0; i < 26; i++) {
			s = nextConvert(s);
			if (check(s)) {
				cout << s << endl;
				break;
			}
		}
	}

	return 0;
}