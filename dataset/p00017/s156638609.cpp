#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"


int main() {
	string st;
	vector<string>ths{ " the "," this "," that " };
	while (getline(cin, st)) {
		st.push_back(' ');
		st.insert(st.begin(), ' ');
		for (int i = 0; i < 26; ++i) {
			string nextst(st);
			for (auto&c : nextst) {
				int n = c - 'a';
				if (n < 0 || n >= 26)continue;
				n += i;
				n %= 26;
				c = 'a' + n;
			}
			bool ok = false;
			for (auto th : ths) {
				if (nextst.find(th) != -1)ok = true;
			}
			if (ok) {
				cout << nextst.substr(1,nextst.size()-2) << endl;
				break;
			}
		}
	}
	return 0;
}