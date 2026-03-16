#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define Cout(x) cout << (x) << endl
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
const int inf = (int)1e9;
const long long mod = (long long)1e9 + 7;
const double pi = acos(-1.0);

int main() {
	int c1 = 0, c2 = 0;
	int a, b, c; char ch;
	while (cin >> a >> ch >> b >> ch >> c) {
		c1 += a * a + b * b == c * c;
		c2 += a + b >= c && a == b;
	}
	Cout(c1);
	Cout(c2);
}
