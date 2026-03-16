#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	map< string , vector<int> > index;
	int page;
	string s;

	while( cin >> s >> page ){
		index[s].push_back( page );
	}
	
	map< string , vector<int> >::iterator it;
	for( it = index.begin() ; it != index.end() ; ++it ){
		sort( it->second.begin() , it->second.end() );
		
		cout << it->first << endl;
		for(int i=0 ; i < it->second.size() ; ++i ){
			cout << it->second[i];
			( i == it->second.size()-1 )? cout << endl : cout << " " ;
		}
	}
}