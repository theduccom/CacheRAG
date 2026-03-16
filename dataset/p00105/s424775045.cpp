#pragma warning(disable:4996)
#pragma warning(disable:4786)
#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
	string word;
	int page;
	map<string, set<int>> indexs;
	while (cin >> word >> page){
		indexs[word].insert(page);
	}
	for (auto index : indexs){
		cout << index.first << endl;
		for (auto page_a : index.second){
			cout << page_a;
			if (*(index.second.rbegin()) != page_a)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}