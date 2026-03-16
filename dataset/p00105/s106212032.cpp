#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <iostream>

using namespace std;
/** Problem0105 : Book Index **/
int main()
{
	map<string, vector<int> >index;
	string s; int p;
	
	while (cin >> s >> p) {
		index[s].push_back(p);
	}
	
	map<string, vector<int> >::iterator it = index.begin();
	for (;it != index.end(); it++) {
		cout << it->first << endl;
		
		sort(index[it->first].begin(), index[it->first].end());
		
		vector<int>::iterator it2 = index[it->first].begin();
		cout << *it2;
		for (++it2 ;it2 != index[it->first].end(); it2++) {
			cout << " " << *it2;
		}
		cout << endl;
	}
}