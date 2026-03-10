#include "bits/stdc++.h"
using namespace std;
#define REP(i,m,n) for(long long i=m;i<n;++i)
#define INF 10000000000000000
#define MOD 1000000007
#define ll long long
#define mp make_pair
#define all(v) v.begin(),v.end()

int main(){
	REP(i,1,10){
		REP(j,1,10){
			cout<<i<<"x"<<j<<"="<<i*j<<endl;
		}
	}
	return 0;
}