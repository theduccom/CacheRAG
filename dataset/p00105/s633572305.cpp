#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

typedef priority_queue<int,vector<int>,greater<int> > Q;

int p;
string s;
map<string,Q> m;

int main(){
	while(cin>>s>>p){
		m[s].push(p);
	}
	map<string,Q>::iterator ite;
	for(ite=m.begin();ite!=m.end();ite++){
		cout<<ite->first<<endl;
		Q q=ite->second;
		bool f=0;
		while(!q.empty()){
			p=q.top();q.pop();
			if(f)cout<<" ";
			cout<<p;
			f=1;
		}
		cout<<endl;
	}
}