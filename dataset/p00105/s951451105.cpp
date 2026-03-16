#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	map< string, vector<int> > m;
	string word;
	int page;

	while (cin >> word >> page){
		if (m.count(word)) m[word].push_back(page);
		else {
			vector<int> v;

			v.push_back(page);
			m.insert(make_pair(word, v));
		}
	}

	for (map< string, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){
		cout << it->first << endl;
		sort(it->second.begin(), it->second.end());
		for (int i = 0; i < it->second.size(); i++){
			printf("%d%c", it->second[i], i == it->second.size() - 1 ? '\n' : ' ');
		}
	}
}