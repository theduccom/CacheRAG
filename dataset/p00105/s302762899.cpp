#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main(){
	string s;
	int n;
	map<string,vector<int> > word;
	while(cin>>s>>n){
		word[s].push_back(n);
	}
	for(map<string,vector<int> >::iterator it=word.begin();it!=word.end();++it){
		vector<int> &v=it->second;
		cout<<it->first<<endl;
		sort(v.begin(),v.end());
		cout<<v[0];
		for(int i=1;i<v.size();i++)cout<<' '<<v[i];
		cout<<endl;
	}
	return 0;
}