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

		string a, b; cin >> a >> b;
		vector<int>v(101);
		for (int i = 0; i < a.size(); ++i) {
			v[101 - a.size() + i] = a[i] - '0';
		}
		for (int i = 0; i < b.size(); ++i) {
			v[101 - b.size() + i] += b[i] - '0';
		}
		for (int i = 100; i > 0; --i) {
			if (v[i] >= 10) {
				v[i - 1]++;
				v[i] -= 10;
			}
		}
		int num = 0;
		num = find_if(v.begin(), v.end(), [](const int a) {return a; })-v.begin();
		if (num <= 20)cout << "overflow" << endl;
		else {
			if (num == 101)cout << 0 << endl;
			else {

				for (int i = num; i < 101; ++i) {
					cout << v[i];
				}
				cout << endl;
			}
		}
	}
	return 0;
}