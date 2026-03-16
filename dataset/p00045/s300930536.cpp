#include<iostream>
using namespace std;
int a, b, sum1, sum2, sum3; double ave; char t;
int main() {
	while (cin >> a >> t >> b) {
		sum1 += a*b;
		sum2 += b;
		sum3++;
	}
	ave = 1.0*sum2 / sum3;
	cout << sum1 << endl;
	cout << (int)(ave + 0.5) << endl;
}