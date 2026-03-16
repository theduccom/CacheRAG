#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	int ans = 0;
	string st;
	while (cin >> st) {
		string rev;
		reverse(st.begin(), st.end());
		rev = st;
		reverse(st.begin(), st.end());
		ans += st == rev;
	}
	cout << ans << endl;
	return 0;
}