#include <bits/stdc++.h>
using namespace std;

int main() {
	int l = 0 , v1, v2;
	char a;
	vector<int> L, V1, V2;
	vector<vector<int>> LL;
	while (cin >> l >> a) {
		L.push_back(l);
		for (int i = 1; i < 10; i++) {
			cin >> l >> a;
			L.push_back(l);
		}
		cin >> v1 >> a >> v2;
		LL.push_back(L); V1.push_back(v1); V2.push_back(v2);
		L.clear();
	}
	for (int i = 0; i < LL.size(); i++) {
			double t = 0, wa = 0,li;
			for (int k = 0; k < 10; k++)wa += LL[i][k];
			t = wa / (V1[i] + V2[i]);li = t*V1[i];
			for (int k = 0; k < 10; k++) {
				li -= LL[i][k]; 
				if (li <= 0) {
					cout << k + 1 << endl; break;
				}
		}
	}
	return 0;
}