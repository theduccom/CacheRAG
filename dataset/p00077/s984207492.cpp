#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps = 1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"


int main() {
	string st;
	while (getline(cin,st)) {
		string ans;
		for (int i = 0; i < st.size(); ++i) {
			if (st[i] == '@') {
				int num = st[i + 1] - '0';
				for (int j = 0; j < num; ++j) {
					ans.push_back(st[i + 2]);
				}
				i += 2;
			}
			else {
				ans.push_back(st[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}