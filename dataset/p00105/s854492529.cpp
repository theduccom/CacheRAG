#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>

using namespace std;

string char_to_str(char *c) {
	string ret = "";

	for (; *c; ++c)
		ret += *c;

	return ret;
}

int main() {
	map<string, vector<int> > m;
	vector<string> words;

	char word[50]; int page;
	while (scanf("%s%d\n", word, &page) != EOF) {
		string str = char_to_str(word);
		m[str].push_back(page);
		words.push_back(str);
	}

	sort( words.begin(), words.end() );
	words.erase( unique( words.begin(), words.end() ), words.end() );

	for (int i = 0; i < words.size(); ++i) {
		vector<int> v = m[words[i]];
		sort( v.begin(), v.end() );

		cout << words[i] << endl;
		for (int j = 0; j < v.size(); ++j) {
			cout << v[j];
			if (j+1 < v.size()) cout << " ";
		}
		cout << endl;
	}
}