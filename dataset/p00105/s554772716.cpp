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
	string st;
	map<string, vector<int>>mp;
	while (getline(cin,st)) {
		string name = st.substr(0, st.find(' '));
		int page = stoi(st.substr(st.find(' ') + 1));
		mp[name].push_back(page);
	}
	for (auto m : mp) {
		cout << m.first << endl;
		sort(m.second.begin(), m.second.end());
		for (int i = 0; i < m.second.size(); ++i) {
			cout << m.second[i];
			if (i == m.second.size() - 1)cout << endl;
			else cout << " ";

		}
	}
	return 0;
}