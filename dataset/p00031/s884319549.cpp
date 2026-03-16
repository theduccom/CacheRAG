#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	vector<int> M,N;
	vector<vector<int>> POW;
	while (cin >> m) 
		M.push_back(m);
	for (int i = 0; i < M.size(); i++) {
		int mi = M[i];
		for (int j = 0; j < 10; j++) {
			if (pow(2, j) <= mi && mi < pow(2, j + 1)) {
				N.push_back(j); mi -= pow(2, j);
				if (mi == 0)break;
				else j = -1;
			}
		}
		sort(N.begin(), N.end());
		POW.push_back(N); N.clear();
	}
	for (int i = 0; i < POW.size(); i++) {
		for (int j = 0; j < POW[i].size(); j++) {
			if (j != POW[i].size() - 1)cout << pow(2, POW[i][j]) << " ";
			else cout << pow(2,POW[i][j]) << endl;
		}
	}
	return 0;
}