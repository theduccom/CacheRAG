#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string s; int n;
	set<string>st;
	map<string, vector<int>>m;
	while (cin >> s >> n) {
		st.insert(s);
		m[s].push_back(n);
	}
	for (auto i = st.begin(); i != st.end(); i++) {
		string str = *i;
		cout << str << endl;
		sort(m[str].begin(), m[str].end());
		for (int j = 0; j < m[str].size(); j++) {
			if (j)cout << ' '; cout << m[str][j];
		}
		cout << endl;
	}
}