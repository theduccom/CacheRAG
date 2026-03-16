#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class t>
using table = vector<vector<t>>;
const ld eps=1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.answer"

int main() {
	string st; getline(cin, st);
	string ans;
	for (int i = 0; i < st.size(); ++i) {
		string aa = st.substr(i, 5);
		if (aa == "apple") {
			ans += "peach";
			i += 4;
		}
		else if (aa == "peach") {
			ans += "apple";
			i += 4;

		}
		else {
			ans += st[i];
		}
	}
	cout << ans << endl;
	return 0;
}