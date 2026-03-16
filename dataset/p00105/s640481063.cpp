#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main(){
	map<string, set<int> > index;
	string s;
	int n;
	while(cin >> s >> n)
		index[s].insert(n);
		
	map<string,set<int> >::iterator it = index.begin();
	while(it != index.end()){
		cout << it->first << endl;
		set<int>::iterator its = (it->second).begin();
		while(its != (it->second).end()){
			cout << *its;
			cout << (++its != (it->second).end() ? " " : "\n");
		}
		++it;
	}
	return 0;
}