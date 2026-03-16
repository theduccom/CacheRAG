#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		for (int i = 0; i < N; ++i) {
			int m, e, j; cin >> m >> e >> j;
			int ans = 0;
			if (m == 100 || e == 100 || j == 100) {
				ans = 0;
			}
			else if (m + e >= 180)ans = 0;
			else if (m + e + j >= 240)ans = 0;
			else if (m + e + j >= 210)ans = 1;
			else if (m + e + j >= 150 && (m >= 80 || e >= 80))ans = 1;
			else ans = 2;
			if (ans == 0)cout << 'A' << endl;
			else if (ans == 1)cout << 'B' << endl;
			else cout << 'C' << endl;
		}
	}
	
	return 0;
}