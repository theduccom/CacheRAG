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
	int N; cin >> N;
	while (N--) {
		int score = 0;
		int out = 0;
		int run = 0;
		while (out <= 2) {
			string st; cin >> st;
			if (st == "OUT")out++;
			else if (st == "HIT") {
				run++;
				if (run == 4) {
					run = 3;
					score++;
				}
			}
			else {
				score += 1 + run;
				run = 0;
			}
		}
		cout << score << endl;
	}
	return 0;
}