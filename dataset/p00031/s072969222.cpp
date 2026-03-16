#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <functional>
#include <numeric>
#include <sstream>

#define REP(i, n) for(int i = 0;i < (n); i++)
#define REP2(i, x, n) for(int i = (x); i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define PI 3.14159265358979

using namespace std;

//================================================

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	while (cin >> N) {
		vector<int>ans;
		while (N != 0) {
			if (N - 512 >= 0) {
				N -= 512;
				ans.push_back(512);
			} else if (N - 256 >= 0) {
				N -= 256;
				ans.push_back(256);
			} else if (N - 128 >= 0) {
				N -= 128;
				ans.push_back(128);
			} else if (N - 64 >= 0) {
				N -= 64;
				ans.push_back(64);
			} else if (N - 32 >= 0) {
				N -= 32;
				ans.push_back(32);
			} else if (N - 16 >= 0) {
				N -= 16;
				ans.push_back(16);
			} else if (N - 8 >= 0) {
				N -= 8;
				ans.push_back(8);
			} else if (N - 4 >= 0) {
				N -= 4;
				ans.push_back(4);
			} else if (N - 2 >= 0) {
				N -= 2;
				ans.push_back(2);
			} else {
				N--;
				ans.push_back(1);
			}
		}

		SORT(ans);
		cout << ans[0];
		REP2(i, 1, ans.size()) {
			cout << ' ' << ans[i];
		}
		cout << "\n";
	}
	return 0;
}