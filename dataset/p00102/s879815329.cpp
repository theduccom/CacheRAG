#include <iostream>
#include <vector>
#include <numeric>
#include <ios>
#include <iomanip>

using namespace std;


int main() {
	int n;
	while (cin >> n, n != 0) {
		vector<vector<int>> vec(n + 1);

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				int temp;
				cin >> temp;
				vec[i].push_back(temp);
			}
			int sum = accumulate(vec[i].begin(), vec[i].end(), 0);
			vec[i].push_back(sum);
		}
		for (int j = 0; j < n + 1; ++j) {
			int sum = 0;
			for (int i = 0; i < n; ++i) {
				sum += vec[i][j];				
			}
			vec[n].push_back(sum);
		}
		for (auto& a : vec) {
			for (auto& ans : a) {
				cout << setw(5) << right << ans;
			}
			cout << endl;
		}
	}
	return 0;
}