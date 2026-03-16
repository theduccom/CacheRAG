#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	int N;
	while (cin >> N) {
		vector<int>anss;
		for (int i = 0; i < 100; ++i) {
			if (N % 2) {
				anss.push_back(1<<i);
			}
			N /= 2;
		}
		for (int i = 0; i < anss.size(); ++i) {
			cout << anss[i];
			if (i == anss.size() - 1)cout << endl;
			else cout << " ";
		}
	}
	return 0;
}