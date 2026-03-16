#include<iostream>
#include<array>
#include<numeric>

using namespace std;

// 二つの列車がすれ違う時刻
// v1 * t = 全長 - v2 * t
// (v1 + v2) * t = 全長
// t = 全長/ (v1 + v2)

// 二つの列車がすれ違う場所
// x = v1 * t

int main() {

	while (true) {
		array<int, 10> l;
		int v1, v2;
		for (int& a : l) {
			cin >> a;
			cin.ignore();
		}
		cin >> v1;
		cin.ignore();
		cin >> v2;
		if (cin.eof()) {
			break;
		}
		double t = static_cast<double>(accumulate(l.begin(), l.end(), 0)) / (v1 + v2);
		double x = v1 * t;
		
		// 誤差により全長をオーバーする場合を考えて10に初期化
		int result = 10;
		int sum = 0;
		for (int i = 0; i < 10; ++i) {
			sum += l[i];
			if (x <= sum) {
				result = i + 1;
				break;
			}
		}
		cout << result << endl;
	}
	

	return 0;
}