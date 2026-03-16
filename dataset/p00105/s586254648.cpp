#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	string s;
	int p;
	map<string, vector<int> > index;
	while(cin >> s >> p){
		index[s].push_back(p);
	}
	for(auto a: index){
		cout << a.first << endl;
		sort(a.second.begin(), a.second.end());
		for(int i=0; i<(int)a.second.size()-1; i++){
			cout << a.second[i] << " ";
		}
		cout << a.second.back() << endl;
	}
	return 0;
}
