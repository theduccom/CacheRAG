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
#define RREP(i, n) for (int i = (n) -1;i >= 0; i--)

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

	int ans = 0;
	string S;
	while(cin >> S) {

		vector<string>Svec;
		REP(i, S.size()) {
			string tmp;
			tmp = S[i];
			Svec.push_back(tmp);
		}

		vector<string>Sreverse;
		Sreverse = Svec;
		reverse(ALL(Sreverse));

		if (Svec == Sreverse) {
			ans++;
		}
	}

	cout << ans << "\n";
	return 0;
}