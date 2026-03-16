#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <ctime>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

void Eratosthenes(int n,vi& primes)
{
	primes.assign(n+1,0);
	repi(i,2,n+1)
		primes[i]=1;
	repi(i,2,n+1){
		if(primes[i]==0)
			continue;
		for(int j=i+i;j<=n;j+=i)
			primes[j]=0;
	}
}

int main()
{
	vi isPrimes;
	Eratosthenes(50021,isPrimes);
	vi primes;
	rep(i,isPrimes.size())
		if(isPrimes[i])
			primes.push_back(i);
	
	for(int n;cin>>n;){
		int a=*(lower_bound(allof(primes),n)-1);
		int b=*upper_bound(allof(primes),n);
		cout<<a<<" "<<b<<endl;
	}
	
	return 0;
}