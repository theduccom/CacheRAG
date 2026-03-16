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

vector<bool> Prime;
void initPrime(long num) {
	Prime = vector<bool>(num + 1, true);
	Prime[1] = Prime[0] = false;
	for (long i = 2; i * i <= num; i++) {
		if (Prime[i]) {
			for (long j = i + i; j <= num; j += i) {
				Prime[j] = false;
			}
		}
	}
}
 
int main(void) {
	initPrime(1000000);
	int N, X;
	while (cin >> N >> X, N) {
		VI ps(N);
		for (auto &p : ps) cin >> p;
		
		vector<bool> dp(X + 1);
		dp[0] = true;

		for (auto p : ps) {
			for (int i = 0; i <= X; i++) {
				if (!dp[i]) continue;

				int np = i + p;
				if (np <= X) {
					dp[np] = true;
				}
			}
		}

		int ans = 0;
		for (int i = 0; i <= X; i++) {
			if (dp[i] && Prime[i]) ans = i;
		}

		if (ans) cout << ans << endl;
		else cout << "NA" << endl;
	}

}