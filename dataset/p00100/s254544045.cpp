#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

// ベクターに売り上げを記録していく。
// 同じ社員が複数のデータを持つこともあるので、
// 記録がある場合には加算していく。
// 1000000以上の場合に社員番号を出力する。
// 該当する社員0人の場合はNAを出力する。

int main() {

	int N;
	while (cin >> N , N != 0) {
		vector<pair<int, long long>> data;

		for (int i = 0; i < N; ++i) {
			int number, price, sales;
			cin >> number >> price >> sales;
			auto it = find_if(data.begin(), data.end(), [number](pair<int, int> x) {return x.first == number;});
			auto total = static_cast<long long>(price) * sales;
			if (it != data.end()) {
				it->second += total;
			}
			else {
				data.emplace_back(pair<int, long long>{number, total});
			}
		}
		int cnt = 0;
		for (const auto a : data) {
			if (a.second >= 1000000) {
				++cnt;
				cout << a.first << endl;
			}
		}
		if (0 == cnt) {
			cout << "NA" << endl;
		}
	}
	return 0;
}