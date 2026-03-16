#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	map<string, vector<int> > dic;
	string str;
	int page;
	int i;

	while(!cin.eof()) {
		cin >> str >> page;
		if(!cin.eof()) { dic[str].push_back( page ); }
	}

	map<string, vector<int> >::iterator it = dic.begin();
	while(it != dic.end() ) {
		cout << (*it).first << endl;
		sort((*it).second.begin(), (*it).second.end());
		for(i = 0; i < (int)(*it).second.size(); i++) {
			cout << (*it).second[i];
			if(i < (int)(*it).second.size()-1) { cout << " "; }
		}
		cout << endl;
		++it;
	}

	return 0;
}