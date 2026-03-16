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
		if (N == -1)break;
		int num;
		if (N <= 10)num = 1150;
		else if (N <= 20)num = 1150 + (N - 10) * 125;
		else if (N <= 30)num = 1150 + 1250 + (N - 20) * 140;
		else num = 1150 + 1250 + 1400 + (N - 30) * 160;
		cout << 4280- num << endl;
	}
	return 0;
}