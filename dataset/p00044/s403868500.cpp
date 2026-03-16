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

bool isso(long long int a) {
	if (a == 1 || a == 0)return false;
	for (long long int i = 2; i*i <= a; ++i) {
		if ((a%i)) {
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	
	int N;
	while (cin>>N) {
		for (int i = N - 1;; --i) {
			if (isso(i)) {
				cout << i << " ";
				break;
			}
		}
		for (int i = N + 1;; ++i) {
			if (isso(i)) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}