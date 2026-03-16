#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)


int main(){
	vector<string> s;
	map<string,vector<int> > ma;
	string tmp;
	while(cin>>tmp){
		int t;
		cin>>t;
		ma[tmp].push_back(t);
		s.push_back(tmp);
	}
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	rep(i,s.size()){
		cout<<s[i]<<endl;
		sort(ma[s[i]].begin(),ma[s[i]].end());
		rep(j,ma[s[i]].size()){
			if(j) cout<<" ";
			cout<<ma[s[i]][j];
		}
		cout<<endl;
	}
	return 0;
}