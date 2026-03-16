#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, vector<int> > book;
	string title;
	int page;
	while(cin >> title >> page) {
		book[title].push_back(page);
	}
	for(map<string, vector<int> >::iterator itr = book.begin(); itr != book.end(); itr++) {
		printf("%s\n", (*itr).first.c_str());
		sort((*itr).second.begin(), (*itr).second.end());
		vector<int>::iterator sc = (*itr).second.begin();
		printf("%d", *sc);
		sc++;
		for(; sc != (*itr).second.end(); sc++) {
			printf(" %d", *sc);
		}
		printf("\n");
	}
	return 0;
}