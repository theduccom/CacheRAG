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
		int  N; cin >> N;
		if (!N)break;
		int amax = -1;
		int id = 0;
		for (int i = 0; i < N; ++i) {
			int p, d1, d2; cin >> p >> d1 >> d2;
			if (amax < d1 + d2) {

				id = p;
				amax = d1 + d2;
			}

		}
		cout << id<< " "<<amax<< endl;
	}
	
	return 0;
}