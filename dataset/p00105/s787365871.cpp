/*
Accepted 7/19
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <assert.h>


using namespace std;


#define typeof(X) std::identity<decltype(X)>::type
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define clr(a) memset((a),0,sizeof(a))
#define nclr(a) memset((a),-1,sizeof(a))
#define pb push_back
#define INRANGE(x,s,e) ((s)<=(x) && (x)<(e))
#define MP(a,b) make_pair((a),(b))

int main(){
	bool flag=true;
	multimap<string,int> dat;
	pair<string,int>  temp;
	vector<string>    memo;
	vector<int>       page;
	
	while(cin>>temp.first>>temp.second){
		dat.insert(temp);
	}
	for(auto i:dat){
		if(!(i.first.empty())){
			pair<multimap<string,int>::iterator,multimap<string,int>::iterator> tdat=dat.equal_range(i.first);
			auto find_it =find(begin(memo),end(memo),i.first);
			if( find_it == memo.end()){
				if(flag){
					cout<<i.first<<endl;
					flag=false;
				}else{
					cout<<"\n"<<i.first<<endl;
				}
				memo.push_back(i.first);
				page.clear();
			    for (auto it = tdat.first; it != tdat.second; ++it){
		        	page.push_back((*it).second);
		        }
		        sort(begin(page),end(page));
		        int j=0;
		        for(auto i:page){
		        	j++;
		        	if(j<page.size()){
						cout<<i<<" ";
					}else{
						cout<<i;
					}
		        }
		    }
		}
	}
	cout<<endl;
	
	return 0;
}