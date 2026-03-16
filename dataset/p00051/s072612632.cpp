#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	int N; cin >> N;
	while (N--) {
		string st; cin >> st;
		sort(st.begin(), st.end());
		int a = stoi(st);
		reverse(st.begin(), st.end());
		int b = stoi(st);
		cout << abs(a-b) << endl;
	}
	return 0;
}