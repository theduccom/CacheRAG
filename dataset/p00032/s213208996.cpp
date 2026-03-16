#include<iostream>

using namespace std;

// 長方形の判定：三平方の定理を使用する。
// ひし形の判定：二つの辺の長さが等しいこと
// 正方形の場合：ひし形、長方形の特殊なケースなので両方にカウント

int main() {
	int a, b, c;
	int r_count = 0; // 長方形の数
	int l_count = 0; // ひし形の数
	// 
	while (true) {
		cin >> a;
		cin.ignore();
		cin >> b;
		cin.ignore();
		cin >> c;
		if (cin.eof()) {
			break;
		}
		// 長方形判定
		if (a * a + b * b == c * c) {
			++r_count;
		}
		// ひし形判定
		if (a == b) {
			++l_count;
		}
	}
	cout << r_count << endl;
	cout << l_count << endl;

	return 0;
}