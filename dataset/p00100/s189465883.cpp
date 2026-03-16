#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<ll, ll>P;

int main() {
	ll n;
	while (cin >> n, n) {
		map<ll, ll>mp;
		map<ll, ll>pos;
		rep(i, n) {
			ll e, p, q; cin >> e >> p >> q;
			mp[e] += p*q; pos[e] = i;
		}
		vector<P>v;
		for (P i : mp)v.push_back(i);
		sort(v.begin(), v.end(), [&](P a, P b) {return pos[a.first] <= pos[b.first]; });
		bool flag = true;
		for (P i : v) {
			if (i.second >= 1000000) {
				cout << i.first << endl;
				flag = false;
			}
		}
		if (flag)puts("NA");
	}
}