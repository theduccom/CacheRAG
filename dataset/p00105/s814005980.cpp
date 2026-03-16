#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main (int argc, char *argv[]) {
	map<string,vector<int> > dict;
	string word;
	int page_num;
	while (cin >> word >> page_num) {
		// New
		if (dict.count(word) == 0) {
			dict.insert(make_pair(word,vector<int>(1,page_num)));
		}
		// Add
		else {
			dict[word].push_back(page_num);
		}
	}
	map<string,vector<int> >::iterator it = dict.begin();
	while (it != dict.end()) {
		cout << it->first << endl;
		vector<int> sorted = it->second;
		sort(sorted.begin(), sorted.end());
		for(int i = 0; i < sorted.size(); ++i) {
			cout << sorted[i];
			if (i != sorted.size()-1) cout << " ";
		}
		cout << endl;
		it++;
	}
	return 0;
}