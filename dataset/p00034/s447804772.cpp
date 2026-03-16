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
//文字列分割
vector<int> split(string str, char del) {
	vector<int> re; string sub;
	for (char c : str) {
		if (c == del) re.push_back(stoi(sub)), sub.clear();
		else sub += c;
	}
	re.push_back(stoi(sub));
	return re;
}

int main() {
	string S;
	while (cin >> S) {
		VI vec = split(S, ',');
		VI l(10); rep(i, 10)l[i] = vec[i];
		VI v(2); rep(i, 2)v[i] = vec[i + 10];

		int sum = accumulate(all(l), 0);
		double a = (double)sum / (v[0] + v[1]) * v[0];
		int ans = 0;
		rep(i, 10) {
			if (a <= l[i]) { ans = i + 1; break; }
			a -= l[i];
		}
		Cout(ans);
	}
}
