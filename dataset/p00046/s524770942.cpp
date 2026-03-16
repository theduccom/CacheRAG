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
	
	ld N;
	vector<ld>nums;
	while (cin>>N) {
		nums.emplace_back(N);
	}
	cout <<setprecision(22)<<fixed<< *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()) << endl;
	return 0;
}