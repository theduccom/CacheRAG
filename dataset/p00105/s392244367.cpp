#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string str;
	int page;
	map<string,vector<int>> dict;

	while(cin >> str >> page){
		dict[str].push_back(page);
	}

	for(map<string,vector<int>>::iterator it = dict.begin(); it != dict.end(); it++){
		sort(it->second.begin(), it->second.end());

		cout << it->first << endl;

		for(int i = 0; i < (int)it->second.size(); i++){
			cout << it->second[i];
			cout << ((i < (int)it->second.size()-1)?' ':'\n');
		}
	}
}