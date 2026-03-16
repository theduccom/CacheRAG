#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		map<int, int>mp;
		rep(i, n) {
			int p, d1, d2; cin >> p >> d1 >> d2;
			mp[p] = d1 + d2;
		}
		int Max = -1, index;
		for (auto p : mp) {
			if (Max < p.second) {
				Max = p.second;
				index = p.first;
			}
		}
		cout << index << ' ' << Max << endl;
	}
}