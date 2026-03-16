#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <utility>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	char s[35];
	map<string, set<int> > m;
	int x;
	while(1) {
		if(scanf("%s %d", s, &x) == EOF) break;
		if(m.count(s) == 0) {
			set<int> v;
			v.insert(x);
			m.insert(make_pair(s, v));
		} else {
			set<int> v = m[s];
			v.insert(x);
			m[s] = v;
		}
	}
	for(auto it = m.begin(); it != m.end(); ++it) {
		cout << (*it).first << endl;
		for(auto it2 = it->second.begin(); it2 != --(it->second).end(); ++it2) {
			cout << *it2 << " ";
		}
		cout << *--(it->second).end() << endl;
	}
	return 0;
}