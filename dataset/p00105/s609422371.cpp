#include<bits/stdc++.h>
using namespace std;
map<string,priority_queue<int,vector<int>,greater<int> > > Map;
signed main(void){
	ios::sync_with_stdio(false);
	string s;int page;
	while(cin>>s>>page)	Map[s].push(page);
	for(map<string,priority_queue<int,vector<int>,greater<int> > >::iterator it=Map.begin();it!=Map.end();++it,cout<<endl){
		cout<<it->first<<endl;
		for(int fst=1;!it->second.empty();it->second.pop(),fst=0){
			if(!fst)cout<<" ";
			cout<<it->second.top();
		}
	}
}