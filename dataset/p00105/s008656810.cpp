#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
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
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;

map<string,vector<int> > idx;


main(){
	string name;
	int page;
	
	while(cin>>name>>page){
		idx[name].push_back(page);
	}
	
	for(map<string,vector<int> >::iterator p=idx.begin();p!=idx.end();++p){
		
		cout<<p->first<<endl;
		sort(p->second.begin(),p->second.end());
		int sf=0;
		for(vector<int>::iterator vp=p->second.begin();vp!=p->second.end();vp++){
			if(sf==1)cout<<" ";
			sf=1;
			cout<<*vp;
		}
		cout<<endl;
	}
}