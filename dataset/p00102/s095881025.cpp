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
		vector<vector<int>>dates(N + 1, vector<int>(N + 1));
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				cin >> dates[i][j];
				dates[N][j] += dates[i][j];
				dates[i][N] += dates[i][j];
				dates[N][N] += dates[i][j];
			}
		}
		for (int i = 0; i <= N; ++i) {
			for (int j = 0; j <= N; ++j) {
				printf("%5d", dates[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}