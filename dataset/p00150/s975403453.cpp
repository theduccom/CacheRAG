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
 
#define FOR(i,n) for(int i = 0; i < (n); i++)
#define sz(c) ((int)c.size())

typedef unsigned long long ull;
const int INF = (int)1e8;

bool prime[1000001]; //10^6

//素数列挙
void init_prime()
{
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i = 2; i < sizeof(prime); i++) if(prime[i])
		for(int j = i * 2; j < sizeof(prime); j += i) prime[j] = false;
}

int main(){
	init_prime();
	vector<int> v;
	FOR(i,10000) if(prime[i] && prime[i+2]) v.push_back(i+2);

	int n; 
	while(cin>>n,n){
		int a = *(upper_bound(v.begin(),v.end(),n)-1);
		printf("%d %d\n",a-2,a);
	}

	return 0;
}