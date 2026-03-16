#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	string s;
	int p;
	map<string,vector<int> > index;
	while(cin>>s>>p) index[s].push_back(p);
	for(map<string,vector<int> >::iterator it=index.begin();it!=index.end();++it){
		cout<<(*it).first<<"\n";
		sort((*it).second.begin(),(*it).second.end());
		for(int i=0;i<(*it).second.size();++i)cout<<(*it).second[i]<<((i!=(*it).second.size()-1)?" ":"\n");
	}
	return 0;
}