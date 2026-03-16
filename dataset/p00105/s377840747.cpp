#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(){

	map<string,set<int> > ls;
	string s;
	int num;
	while(cin>>s>>num){
		ls[s].insert(num);
	}
	for(map<string,set<int> >::iterator it = ls.begin(); it != ls.end(); it++){
		cout<<it->first<<endl;
		for(set<int>::iterator iit = (it->second).begin(); iit != (it->second).end();){
			cout<<*iit;
			if(++iit==(it->second.end())){
				cout<<endl;
			}
			else
				cout<<" ";
		}
	}

	return 0;
}