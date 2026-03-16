#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int N,high;
	double v, y;
	while (cin >> v) {
		N = 1;
		high = 0;
		y = pow(v,2) / 19.6;
		while (high < y) {
			N += 1;
			high += 5;
		}
		cout << N << endl;
	}
	return 0;
}