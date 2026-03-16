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

	string str;
	map<string, int>mp;
	while (getline(cin, str)) {
		string type = str.substr(str.find(',')+1);
		mp[type]++;
	}
	cout << mp["A"] << endl;
	cout << mp["B"] << endl;
	cout << mp["AB"] << endl;
	cout << mp["O"] << endl;
	return 0;
}