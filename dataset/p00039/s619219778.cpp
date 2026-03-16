#include<iostream>
#include<string>

using namespace std;

/*
各記号の意味
 I:1, V:5, X:10, L:50, C:100, D:500, M:1000

 規則
 小さい数字が大きい数字の後に続いている。(右側にある)
 　→足し算する

 小さい数字が大きい数字の前にある。(左側)
 　→一つだけ引き算をする。
 
 方法
  基本的には前から順番に足し算していく。
  引き算が発生するのは1つ前の値が小さい場合だけ。
  一文字ずつチェックするときに前の値を記録しておき、
  小さければ引き算、それ以外ならその値を足していく。
*/

int roman_to_number(char roman){
	switch (roman) {
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		// その他の数字の場合入力にエラーがある。
		// このプログラムでは例外を投げて対処しない。
		throw -1;
	}
}

int main() {
	string line;
	while (cin >> line) {
		int sum = 0;
		int temp = 0;
		for (auto c : line) {
			int num = roman_to_number(c);
			if (temp == 0) {
				//初回 or 前回引き算の処理をしている。
				temp = num;
			}
			else if (num > temp) {
				// 前回の値が今回の値より小さいとき、
				// 前回の値を今回の値から引いた値を合計に足す
				// 今回の値は合計値に利用するためtempは0にしておく
				sum += num - temp;
				temp = 0;
			}
			else {
				// 前回の値が今回の値以上の場合、前回の値を合計値に足す。
				// 今回の値は次回の値チェックで使用するためtempに記録
				sum += temp;
				temp = num;
			}
		}
		// 最後にチェックした時に引き算でないと合計値が確定していないため、値を加算しておく。
		sum += temp;

		cout << sum << endl;
	}

	return 0;
}