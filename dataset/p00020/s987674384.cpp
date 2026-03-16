#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

struct ToUpper {
	char operator()(char c) { return toupper(c); }
};

int main() {
	string st;
	getline(cin, st);
	transform(st.begin(), st.end(), st.begin(), ToUpper());
	cout <<st<< endl;
	return 0;
} 