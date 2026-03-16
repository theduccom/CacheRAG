#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int p;
	multimap<string,int> mp;
	while(cin >> s >> p){
		mp.insert(multimap<string,int>::value_type(s , p));
	}
	for(multimap<string,int>::iterator it=mp.begin();it!=mp.end();){
		vector<int> v;
		string tmp=(*(it)).first;
		cout << tmp << endl;
		do {
			v.push_back((*(it)).second);
			++it;
		} while(it!=mp.upper_bound(tmp));
			sort(v.begin() , v.end());
			for(int i=0;i<v.size()-1;++i){
				cout << v[i] << " ";
			}
			cout << v[v.size()-1] << endl;
	}
	return 0;
}