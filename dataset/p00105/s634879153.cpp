#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string ans = "";
	int in;
	map <string ,vector <int> > mp;
	while(cin >> s >> in){
		mp[s].push_back(in);
	}
	for(auto itr = mp.begin() ; itr != mp.end() ; itr++){
		cout << (*itr).first << endl;
		sort((*itr).second.begin(),(*itr).second.end());
		for(int i = 0; i < (*itr).second.size() ; i++)
			cout << (*itr).second[i] << (i == (*itr).second.size() - 1 ? "" : " ");
		cout << endl;
	}
}