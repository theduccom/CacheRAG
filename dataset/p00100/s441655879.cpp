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
	int n;
	while(cin>>n,n){
		vector<int> a;
		vector<ll> x;
		for (int i = 0; i < n; i++){
			int d; ll b,c; cin>>d>>b>>c;
			int id = find(a.begin(),a.end(),d) - a.begin();
			if(id == (int)a.size()){
				a.push_back(d);
				x.push_back(0L);
			}
			x[id] += b*c;
		}

		vector<int> ans;
		for (int i = 0; i < (int)a.size(); i++){
			if(x[i] >= 1000000L) ans.push_back(a[i]);
		}
		
		if(ans.size() == 0){ cout << "NA" << endl; continue; }

		for (int i = 0; i < (int)ans.size(); i++)
			cout << ans[i] << endl;
	}
    return 0;
}