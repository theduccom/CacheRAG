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

const string ROMA_STR("MDCLXVI");
const VI ROMA_NUM({1000, 500, 100, 50, 10, 5, 1});

int main(void) {
	string str;

	while (cin >> str) {
		VI nums;
		for (char c : str) {
			nums.push_back(ROMA_NUM[ROMA_STR.find(c)]);
		}

		int total = 0;
		for (int i = 0; i < (int)nums.size(); i++) {
			if (i == (int)nums.size() - 1) {
				total += nums[i];
			} else if (nums[i] >= nums[i + 1]) {
				total += nums[i];
			} else {
				total -= nums[i];
			}
		}

		cout << total << endl;
	}

	return 0;
}