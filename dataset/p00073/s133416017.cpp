#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps = 1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"


int main() {
	cout << fixed << setprecision(22);
	while (1) {

		ld X, H; cin >> X >> H;
		if (X < eps)break;
		ld a = sqrt(H*H + X*X / 4);
		cout << X*a * 2 + X*X << endl;
	}

	return 0;
}