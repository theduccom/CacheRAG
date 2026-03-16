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

		vector<long long int>ls(3);
		cin >> ls[0] >> ls[1] >> ls[2];
		sort(ls.begin(), ls.end());
		long long int r = (ls[0] * ls[0] + ls[1] * ls[1]);
		if (!ls[0])break;
		long long int d; cin >> d;
		while (d--) {
			long long int n; cin >> n;
			if (4*n*n>r)cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	return 0;
}