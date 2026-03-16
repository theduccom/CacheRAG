#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
int main() {
	int n;
	while(scanf("%d\n", &n), n){
		vector<pair<ll, ll> > v;
		rep(i,n) {
			ll x, y, z;
			cin >> x >> y >> z;
			bool f = false;
			for(int j = 0; j < v.size(); ++j) {
				if(v[j].first == x) {
					v[j].second += y * z;
					f = true;
					break;
				}
			}
			if(!f) {
				v.push_back(make_pair(x, y * z));
			}
		}
		bool flag = false;
		for(int j = 0; j < v.size(); ++j) {
			if(v[j].second >= 1000000) {
				flag = true;
				cout << v[j].first << endl;
			}
		}
		if(!flag) cout << "NA" << endl;
	}
	return 0;
}