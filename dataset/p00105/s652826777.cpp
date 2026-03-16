#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std;
 
int main() {
	map<string, priority_queue<int,vector<int>,greater<int> > > index;
	string word;
	int page;
 
	while(cin>>word>>page){
		index[word].push(page);
	}
 
	for(multimap<string,priority_queue<int,vector<int>,greater<int> > >::iterator it = index.begin(); it != index.end(); ++it){
		cout << it->first << endl;
 
		priority_queue<int,vector<int>,greater<int> > temp = it->second;
		while(1){
			cout << temp.top();
			temp.pop();
			if(!temp.empty()){cout<<" ";continue;}
			break;
		}
		cout << endl;
 	}
 
	return 0;
}