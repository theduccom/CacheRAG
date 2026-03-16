#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
using namespace std;
int main(){
	
	string str;
	int a;
	int k=0;
	map<string,int> data;
	vector<string> s;
	vector< vector<int> > p(1000); 
	
	while(cin>>str>>a){
		if(data.find(str)==data.end()){
			data[str]=k++;
			s.push_back(str);
		}
		p[data[str]].push_back(a);
		
	}
	sort(s.begin(),s.end());
	
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<endl;
		sort(p[data[s[i]]].begin(),p[data[s[i]]].end());
		cout<<p[data[s[i]]][0];
		for(int j=1;j<p[data[s[i]]].size();j++)
			cout<<" "<<p[data[s[i]]][j];
		cout<<endl;
	}
}