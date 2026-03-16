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
	int a, b, c; cin >> a >> b >> c;
	int sum = 0;
	sum = a * 4 + b * 2 + c;
	if (sum == 6 || sum == 1)cout << "Open" << endl;
	else cout << "Close" << endl;
	
	return 0;
}