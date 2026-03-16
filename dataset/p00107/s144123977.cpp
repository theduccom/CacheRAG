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

int x,y,z,n;

ll sq(ll a){return a*a;}

void solve()
{
	ll a[3] = {x,y,z};
	sort(a,a+3);
	ll r2 = sq(a[0]) + sq(a[1]);
	cin>>n;
	for (int i = 0; i < n; i++){
		ll b; cin>>b;
		puts((r2 >= 4*b*b) ? "NA" : "OK");
	}
}

int main(){
	while(cin>>x>>y>>z,(x||y||z)){
		solve();
	}

    return 0;
}