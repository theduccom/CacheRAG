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
	getline(cin, s);

	for (int i = 0; i + 5 <= (int)s.size(); i++) {
		if (s.substr(i, 5) == "apple") {
			s.replace(i, 5, "peach");
		} else if(s.substr(i, 5) == "peach") {
			s.replace(i, 5, "apple");
		}
	}

	cout << s << endl;

	return 0;
}