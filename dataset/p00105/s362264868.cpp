#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	string str;
	multimap<string, int> m;
	multimap<string, int>::iterator iter;
	int n;

	while(cin >> str >> n)
		m.insert(pair<string, int>(str, n));

	iter = m.begin();
	while(iter != m.end()) {
		pair<multimap<string, int>::iterator, multimap<string, int>::iterator> p;
		p = m.equal_range(iter->first);

		vector<pair<string,int> > v(p.first, p.second);
		sort(v.begin(), v.end());
		cout << v[0].first << endl;
		for(int i = 0; i < v.size() - 1; i++) {
			cout << v[i].second << " ";
		}
		cout << v[v.size() - 1].second << endl;
		iter = p.second;
	}
}