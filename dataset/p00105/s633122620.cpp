#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	map< string, vector<int> > table;
	string word;
	int n;
	while(cin>>word>>n){
		table[word].push_back(n);
	}
	for(map<string, vector<int> >::iterator it = table.begin();it!=table.end();++it){
		cout<<it->first<<endl;
		vector<int> tmp = it->second;
		sort(tmp.begin(),tmp.end());
		int x = 0;
		for(;x<tmp.size()-1;++x){
			cout<<tmp[x]<<" ";
		}
		cout<<tmp[x]<<endl;
	
	}
	return 0;		
}