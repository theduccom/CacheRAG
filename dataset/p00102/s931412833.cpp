
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		vector<vector<int>> v(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
			}
		}
		// vertical sum
		vector<int> vert(n);
		for (int i = 0; i < n; i++) {
			vert[i] = 0;
			for (int j = 0; j < n; j++) {
				vert[i] += v[i][j];
			}
		}
		// horizon sum
		vector<int> hori(n);
		for (int i = 0; i < n; i++) {
			hori[i] = 0;
			for (int j = 0; j < n; j++) {
				hori[i] += v[j][i];
			}
		}
		// all sum
		int sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				sum += v[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			cout << setw(5) << right << v[i][0];
			for (int j = 1; j < n; j++) {
				cout << setw(5) << right << v[i][j];
			}
			cout << setw(5) << right << vert[i] << endl;
		}
		cout << setw(5) << right << hori[0];
		for (int i = 1; i < n; i++) {
			cout << setw(5) << right << hori[i];
		}
		cout << setw(5) << right << sum << endl;
	}
}