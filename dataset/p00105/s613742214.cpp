#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	map<string, vector<int> > index;
	string word;
	int page;
	while (cin >> word >> page) {
		index[word].push_back(page);
	}
	map<string, vector<int> >::iterator it = index.begin();
	while (it != index.end()) {
		cout << it->first << endl;
		vector<int> v = it->second;
		sort(v.begin(), v.end());
		int ifs = 1;
		vector<int>::iterator itv = v.begin();
		while (itv != v.end()) {
			if (ifs == 0)
				cout << " ";
			cout << *itv;
			ifs = 0;
			itv++;
		}
		cout << endl;
		it++;
	}

	return 0;
}