#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;

int print_vec(const vector<int>& v)
{
	for (int i = 0; i < v.size(); i++){
		printf("%d%c", v[i], " \n"[i == v.size() - 1]);
	}
	return 0;
}

int main()
{
	map<string, vector<int> > dict;
	string word;
	int page;
	while (cin >> word >> page){
		if (!dict.count(word)){
			vector<int> v;
			v.push_back(page);
			dict[word] = v;
		}
		else dict[word].push_back(page);
	}
	for (map<string, vector<int> >::iterator it = dict.begin(); it != dict.end(); ++it){
		sort(it->second.begin(), it->second.end());
		cout << it->first << "\n";
		print_vec(it->second);
	}
}