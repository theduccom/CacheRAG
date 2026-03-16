#include <string>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
using pair_t = pair< string,vector<int> >;

int main() {
	string word;
	int page;
	vector<pair_t> v;
	while (cin >> word >> page) {
		auto word_pos = find_if(v.begin(),v.end(),[word](pair_t p){return p.first == word;});
		if (word_pos == v.end()) { // if word not exist
			v.push_back({word,{page}});
		} else {
			word_pos->second.push_back(page);
		}
	}
	sort(v.begin(),v.end(),[](pair_t p_1,pair_t p_2){return p_1.first < p_2.first;});
	for (auto i = v.begin();i != v.end();++i) {
		sort(i->second.begin(),i->second.end());
		cout << i->first << endl;
		for_each(i->second.begin(),i->second.end(),[i](int n){cout << n << (n == i->second.back() ? "\n" : " ");});
	}
}