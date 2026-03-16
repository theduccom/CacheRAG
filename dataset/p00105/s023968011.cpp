#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main() {
	map<string, set<int> > id;
	string w; int p;
	while(cin >> w >> p) id[w].insert(p);
	for(map<string, set<int> >::iterator itw=id.begin(); itw!=id.end(); ++itw) {
		cout << (*itw).first << endl;
		for(set<int>::iterator itp=(*itw).second.begin();
				itp!=(*itw).second.end(); ++itp) {
			cout << (itp==(*itw).second.begin()?"":" ") << *itp;
		}
		cout << endl;
	}
	return 0;
}