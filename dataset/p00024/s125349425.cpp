#include<iostream>
#include<cmath>

using namespace std;
/*
	v = 9.8t
	y = 4.8t^2
	割れる速度になるtを求め、その時間でどのくらいの距離になるか計算する。
*/
int main() {
	double v;

	while (cin >> v) {
		double t = v / 9.8;
		double y = 4.9 * t * t;

		int N = static_cast<int>(ceil(y / 5)) + 1;

		cout << N << endl;
	}
}