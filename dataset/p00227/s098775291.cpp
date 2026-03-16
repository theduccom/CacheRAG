#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m, p, ans; vector<int> pv;
	while(1) {
		cin >> n >> m;
		if(!n&&!m) break;
		pv.clear(); ans = 0;
		for(int i=0; i<n; ++i) {
			cin >> p; pv.push_back(p);
		}
		sort(pv.begin(), pv.end(), greater<int>());
		for(int i=0; i<n; ++i) {
			if(i%m<m-1) ans += pv[i];
		}
		cout << ans << endl;
	}
	return 0;
}