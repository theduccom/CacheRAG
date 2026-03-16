#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <math.h>
#include <list>
#include <numeric>

using namespace std;

#define Rep(i,a,b) for(int i = a; i < b; i++)
#define rep(i,b) Rep(i,0,b)
#define rrep(i,a) for(int i = a; i >= 0; i--)
#define allof(a) (a).begin(), (a).end()

typedef long long ll;
const int inf = 1e9 + 7;
const ll infll = 1ll << 60ll;
const ll mod = 1e9 + 7;
// 0~3までは右左下上 4~7までは斜め
constexpr int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
constexpr int dy[] = { 0, -1, 0, 1, 1, -1, -1, 1 };

/*
// 最大公約数
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

// 最小公倍数
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}*/

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	vector<int> a, b;
	while (1) {
		int aa, bb;
		cin >> aa >> bb;
		if (aa == 0 && bb == 0)break;
		a.push_back(aa);
		b.push_back(bb);
	}
	rep(j, (int)a.size()) {

		int ans = 0;

		Rep(i, a[j], b[j] + 1) {
			if (i % 4 == 0) {
				if (i % 100 != 0) {
					ans++;
					cout << i << endl;
				}
				else if (i % 400 == 0) {
					ans++;
					cout << i << endl;
				}
			}
		}

		if (ans == 0) {
			cout << "NA" << endl;
		}
		if(j != (int)a.size() - 1)
			cout << endl;
	}
	return 0;
}

