#include "bits/stdc++.h"
using namespace std;
int main() {
	double v;
	while (cin >> v) {
		int N = 0;
		double V = 0;
		do{
			N++;
			double h = 5 * N - 5;
			V = 9.8*pow(h / 4.9, 0.5);
		} while (V < v);
		cout << N << endl;
	}
}