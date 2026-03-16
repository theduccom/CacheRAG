#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
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
#include <numeric>
#include <list>
#include <iomanip>
#include <iterator>

using namespace std;

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
 
int main(){
	string s;
	int x;
	map<string,vector<int> > mp;
	while(cin>>s>>x)
		mp[s].push_back(x);
	typedef vector<pair<string,vector<int> > > P;
	P vp(mp.begin(),mp.end());
	sort(vp.begin(),vp.end());

	for(P::iterator it = vp.begin(); it != vp.end(); ++it){
		sort((*it).second.begin(),(*it).second.end());
		cout << (*it).first << endl;
		vector<int> &v = (*it).second;
		for(int i = 0; i < (int)v.size(); i++){
			printf("%d%c",v[i],i==(int)v.size()-1?'\n':' ');
		}
	}

    return 0;
}