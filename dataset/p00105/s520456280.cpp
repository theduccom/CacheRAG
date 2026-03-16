#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<int> > index;
	vector<string> strv;
	string s;
	int p;
	
	while (cin >> s >> p){
		if (index.find(s) == index.end()){
			strv.push_back(s);
		}
		index[s].push_back(p);
	}
	sort(strv.begin(), strv.end());
	for (int i = 0; i < strv.size(); i++){
		sort(index[strv[i]].begin(), index[strv[i]].end());
		cout << strv[i] << endl;
		cout << index[strv[i]][0];
		for (int j = 1; j < index[strv[i]].size(); j++){
			cout << ' ' << index[strv[i]][j];
		}
		cout << endl;
	}
	
	return 0;
}