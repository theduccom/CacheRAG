#include <iostream>
#include <stdio.h>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
	int k=0,n,f;
	string s;
	map<string,int> mp;
	set<int> st[1001];
	map<string,int>::iterator it;
	set<int>::iterator si;  
	while(cin >> s >> n) {
		it=mp.find(s);
		if (it==mp.end()) {st[k].insert(n); mp.insert(map<string,int>::value_type(s,k++));}
		else st[(*it).second].insert(n);
	}
	for (it=mp.begin(); it!=mp.end(); it++) {
		cout << (*it).first << endl;
		f=0;
		for (si=st[(*it).second].begin();si!=st[(*it).second].end();si++) if (f==0) {f=1;cout << *si;} else cout << ' ' << *si;
		cout << endl;    
	}
    return 0;
	}