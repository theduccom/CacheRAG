#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

bool primes[60000];
void make_prime(){
	primes[0]=primes[1]=true;
	for(int i=2; i*i<=60000; i++)if( !primes[i] )
		for(int j=i*2; j<60000; j+=i)primes[j]=true;
}
int main(){
	int n,min_p,max_p;
	make_prime();
	while(~scanf("%d",&n)){
		//min
		for(int i=n-1; i>1; i--)if( !primes[i] ){	min_p = i; break; }
		//max
		for(int i=n+1; i<60000; i++)if( !primes[i] ){ max_p=i; break; }
		printf("%d %d\n",min_p,max_p);
	}
	return 0;
}