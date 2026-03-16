#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	string s;
	map<string,vector<int> > m;
	while(cin >> s >> n){
		m[s].push_back(n);
	}
	for(auto it = m.begin();it != m.end();it++){
		cout << it->first << endl;
		sort(it->second.begin(),it->second.end());
		for(int i = 0;i < it->second.size() - 1;i++) cout << it->second[i] << " ";
		cout << it->second[it->second.size() - 1] << endl;
	}
	return 0;
}