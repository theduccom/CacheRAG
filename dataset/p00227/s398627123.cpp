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
#include <sstream>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> pi;
#define rep(i,n) for(int i=0;i<n;i++)
#define mp make_pair

int n,m,p[1000];

main(){
	while(cin>>n>>m,n){
		rep(i,n)cin>>p[i];
		sort(p,p+n,greater<int>());
		int ans=0;
		
		rep(i,n)if((i+1)%m)ans+=p[i];
		cout<<ans<<endl;
	}
}