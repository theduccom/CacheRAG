#include<iostream>
#include<string>

using namespace std;

// 問題に出てくる分銅の質量は2のn乗
// 下位のビットから1ビットずつ確認していく

int main() {
	int w;
	while (cin >> w) {
		string weights;

		// 対応するビットが1になっている確認。
		// 対応していたら値を出力する
		for (int bit = 1; bit < 1024; bit <<= 1) {
			if (bit & w) {
				weights.append(to_string(bit));
				weights.push_back(' ');
			}
		}
		// 最後のスペースを改行に置き換え
		weights.back() = '\n';
		cout << weights;
	}
	return 0;
}