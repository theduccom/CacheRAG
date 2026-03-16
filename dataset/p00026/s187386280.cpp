#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, s;
	char a, b;
	vector<int> X, Y, S, m;
	vector<int> L1 = { -1,1 }, L2 = { -1,0,1 }, L3 = { -2,2 };
	while (cin >> x >> a >> y >> b >> s) {
		X.push_back(x);
		Y.push_back(y);
		S.push_back(s);
	}
	vector<vector<int>> matrix;
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			m.push_back(0);
		}
		matrix.push_back(m);
	}
	for (int i = 0; i < X.size(); i++) {
		if (S[i] == 1) {
			matrix[X[i] + 10][Y[i] + 10] += 1;
			for (int j = 0; j < L1.size(); j++) {
				matrix[X[i] + 10 + L1[j]][Y[i] + 10] += 1;
				matrix[X[i] + 10][Y[i] + 10 + L1[j]] += 1;
			}
		}
		else if (S[i] == 2) {
			for (int j = 0; j < L2.size(); j++) {
				for (int k = 0; k < L2.size(); k++) {
					matrix[X[i] + 10 + L2[j]][Y[i] + 10 + L2[k]] += 1;
				}
			}
		}
		else {
			for (int k = 0; k < L2.size(); k++) {
				for (int j = 0; j < L2.size(); j++) {
					matrix[X[i] + 10 + L2[k]][Y[i] + 10 + L2[j]] += 1;
				}
			}
			for (int j = 0; j < L3.size(); j++) {
				matrix[X[i] + 10 + L3[j]][Y[i] + 10] += 1;
				matrix[X[i] + 10][Y[i] + 10 + L3[j]] += 1;
			}
		}
	}
	int ctr1 = 0, max = INT_MIN;
	for (int i = 10; i < 20; i++) {
		for (int j = 10; j < 20; j++) {
			if (matrix[i][j] == 0) {
				ctr1++;
			}
			else {
				if (max < matrix[i][j])max = matrix[i][j];
			}
		}
	}
	cout << ctr1 << endl;
	cout << max << endl;
	return 0;
}