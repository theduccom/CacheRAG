#include "bits/stdc++.h"

#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef long long ll;

void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif
	int n;
	cin >> n;
	rep(i, n) {
		vector<int> v1(101), v2(101);
		string s1, s2;
		cin >> s1 >> s2;

		rep(j, s1.size()) v1[j] = s1[s1.size() - j - 1] - '0';
		rep(j, s2.size()) v2[j] = s2[s2.size() - j - 1] - '0';
		
		rep(j, 100) {
			v1[j] += v2[j];
			if (v1[j] >= 10) {
				v1[j] -= 10;
				v1[j + 1]++;
			}
		}
		int digit = 0;
		for (int j = 100; j >= 0; j--) {
			if (v1[j] != 0) {
				digit = j;
				break;
			}
		}
		if (digit >= 80) cout << "overflow" << endl;
		else {
			for (int j = digit; j >= 0; j--) cout << v1[j];
			cout << endl;
		}
	}

}




int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);


	solve();
	//system("PAUSE");
	return 0;
}