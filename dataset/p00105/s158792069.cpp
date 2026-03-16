#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string strInput;
	map< string,vector<int> > index;
	int intInput = 0;
	while(cin >> strInput >> intInput){
		index[strInput].push_back(intInput);
	}
	
	for(map< string,vector<int> >::iterator it = index.begin(); it != index.end() ; it++){
		sort( index[(*it).first].begin(),index[(*it).first].end() );
		cout << (*it).first << endl;
		for(int i = 0; i < index[(*it).first].size(); i++){
			if(i == index[(*it).first].size() - 1){
				cout <<  index[(*it).first][i];
				break;
			}
			cout <<  index[(*it).first][i] << ' ';
		}
		cout << endl;
	}

	return 0;
}