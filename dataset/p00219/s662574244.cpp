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
		vector<int>nums(10000);
		for (int i = 0; i < N; ++i) {
			int a; cin >> a; nums[a]++;
		}
		for (int i = 0; i < 10; ++i) {
			if (nums[i]) {
				for (int j = 0; j < nums[i]; ++j) {
					cout << '*';
				}
			}
			else {
				cout << '-';
			}
			cout << endl;
		}
	}
	return 0;
}