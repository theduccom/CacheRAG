#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll need = (int)1e6;

int main() {
	while (1) {
		cin >> n; if (n == 0) break;
		
		map<ll, ll> sum;
		vector<ll> ids;
		for (int i = 0; i < n; i++) {
			ll id, p, q; cin >> id >> p >> q;
			bool add = true;
			for (int j = 0; j < (int)ids.size(); j++) {
				if (ids[j] == id) add = false;
			}
			if (add) ids.push_back(id);
			sum[id] += (p * q);
		}
		
		bool na = true;
		for (int i = 0; i < (int)ids.size(); i++) {
			if (sum[ids[i]] >= need) {
				cout << ids[i] << endl;
				na = false;
			}
		}
		
		if (na) cout << "NA" << endl;
	}
	
	return 0;
}