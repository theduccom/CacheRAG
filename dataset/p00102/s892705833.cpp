#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		vector<int> col_sum(n + 1);
		for (int i = 0;i != n + 1;++i) {
			col_sum[i] = 0;
		}
		for (int i = 0;i != n;++i) {
			int row_sum = 0;
			for (int j = 0;j != n;++j) {
				int num;
				cin >> num;
				cout << setw(5) << num;
				col_sum[j] += num;
				row_sum += num;
			}
			cout << setw(5) << row_sum << endl;
			col_sum[n] += row_sum;
		}
		for (int i = 0;i != n + 1;++i) {
			cout << setw(5) << col_sum[i];
		}
		cout << endl;
	}
}